// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Convert.hpp"

Convert::Convert(void) : _input(""), _raw(0) {
  return;
}

Convert::Convert(const std::string& raw) : _input(raw), _raw(0) {
  if (raw.length() == 1 && std::isalpha(*raw.begin()))
    this->_raw = static_cast<double>(*raw.begin());
  else
    this->_raw = std::strtod(raw.c_str(), NULL);
}

Convert::Convert(const Convert& src) : _input(""), _raw(0) {
  *this = src;
}

Convert::~Convert(void) {
  return;
}

Convert& Convert::operator=(const Convert& rhs) {
  if (this != &rhs) {
    const_cast<std::string&>(this->_input) = rhs.getInput();
    const_cast<double&>(this->_raw) = rhs.getRaw();
  }
  return (*this);
}

Convert::operator char() {
  return (static_cast<char>(this->_raw));
}

Convert::operator int() {
  return (static_cast<int>(this->_raw));
}

Convert::operator float() {
  return (static_cast<float>(this->_raw));
}

Convert::operator double() {
  return (static_cast<double>(this->_raw));
}

std::string Convert::getInput(void) const {
  return (this->_input);
}

double Convert::getRaw(void) const {
  return (this->_raw);
}

std::string Convert::charToPrint(void) {
  std::stringstream ss;
  char c = static_cast<char>(Convert(this->_input));

  if (this->_input.compare("0") && c == 0) {
    return ("impossible");
  } else if (!std::isprint(c)) {
    return ("Non displayable");
  } else {
    ss << "'" << c << "'";
    return (ss.str());
  }
}

std::string Convert::intToPrint(void) {
  std::stringstream ss;
  int n = static_cast<int>(Convert(this->_input));

  if ((this->_input.compare("0") && n == 0) ||
      (this->_input.compare("-2147483648") && n == -2147483648)) {
    return ("impossible");
  } else {
    ss << n;
    return (ss.str());
  }
}

std::string Convert::floatToPrint(void) {
  std::stringstream ss;
  float f = static_cast<float>(Convert(this->_input));
  int n = static_cast<int>(Convert(this->_input));

  if (this->_input.compare("0") && f == 0) {
    return ("impossible");
  } else {
    ss << f;
    if (static_cast<float>(n) == f) {
      ss << ".0f";
    } else {
      ss << "f";
    }
    return (ss.str());
  }
}

std::string Convert::doubleToPrint(void) {
  std::stringstream ss;
  double d = static_cast<double>(Convert(this->_input));

  if (this->_input.compare("0") && d == 0) {
    return ("impossible");
  } else {
    ss << d;
    if (static_cast<int>(d) == d) {
      ss << ".0";
    }
    return (ss.str());
  }
}
