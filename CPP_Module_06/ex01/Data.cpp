// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Data.hpp"

Data::Data(void) : _name(""), _height(0), _weight(0) {
  return;
}

Data::Data(const std::string& name, float height, float weight)
    : _name(name), _height(height), _weight(weight) {
  return;
}

Data::Data(const Data& src) : _name("name"), _height(0), _weight(0) {
  *this = src;
}

Data::~Data(void) {
  return;
}

Data& Data::operator=(const Data& rhs) {
  if (this != &rhs) {
    this->_name = rhs.getName();
    this->_height = rhs.getHeight();
    this->_weight = rhs.getWeight();
  }
  return (*this);
}

std::string Data::getName(void) const {
  return (this->_name);
}

float Data::getHeight(void) const {
  return (this->_height);
}

float Data::getWeight(void) const {
  return (this->_weight);
}

float Data::calculateIMC(void) {
  return (this->_weight / (this->getHeight() * this->getHeight()));
}

uintptr_t serialize(Data* ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
  return (reinterpret_cast<Data*>(raw));
}
