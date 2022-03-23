// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Span.hpp"

const char* Span::NotEnoughCapacity::what(void) const throw() {
  return ("Not enough capacity");
}

const char* Span::InsufficientElements::what(void) const throw() {
  return ("Insufficient elements");
}

Span::Span(void) : _vect(std::vector<int>()), _maximum(0) {
  return;
}

Span::Span(size_t maximum) : _vect(std::vector<int>()),
                             _maximum(maximum) {
  return;
}

Span::Span(const Span& src) : _vect(std::vector<int>()),
                              _maximum(src.getMaximum()) {
  *this = src;
}

Span::~Span(void) {
  return;
}

Span& Span::operator=(const Span& rhs) {
  if (this != &rhs) {
    this->_vect = std::vector<int>(rhs.getContainer());
    this->_maximum = rhs.getMaximum();
  }
  return (*this);
}

const std::vector<int>& Span::getContainer(void) const {
  return (this->_vect);
}

size_t Span::getMaximum(void) const {
  return (this->_maximum);
}

size_t Span::getSize(void) const {
  return (this->_vect.size());
}

int Span::getValueAt(size_t pos) {
  return (this->_vect.at(pos));
}

void Span::addNumber(int n) {
  if (this->_vect.size() == this->_maximum) {
    throw NotEnoughCapacity();
  } else {
    this->_vect.push_back(n);
  }
}

size_t Span::shortestSpan(void) {
  std::vector<int> copyVect(this->_vect);
  std::vector<int>::iterator it;
  int diff;

  if (this->_vect.size() < 2) {
    throw InsufficientElements();
    diff = 0;
  } else {
    diff = INT_MAX;
  }
  std::sort(copyVect.begin(), copyVect.end());
  for (it = this->_vect.begin() + 1; it != this->_vect.end(); it++) {
    if (std::abs(*it - *(it - 1)) < diff) {
      diff = abs(*it - *(it - 1));
    }
  }
  return (diff);
}

size_t Span::longestSpan(void) {
  if (this->_vect.size() < 2) {
    throw InsufficientElements();
  }
  std::vector<int>::iterator it1 = std::min_element(this->_vect.begin(),
                                                    this->_vect.end());
  std::vector<int>::iterator it2 = std::max_element(this->_vect.begin(),
                                                    this->_vect.end());
  return (*it2 - *it1);
}
