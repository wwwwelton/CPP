// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("AAnimal") {
  std::cout << "AAnimal default constructor called\n";
}

AAnimal::AAnimal(std::string const type) : _type(type) {
  std::cout << "AAnimal parametric constructor called\n";
}

AAnimal::AAnimal(AAnimal const &src) {
  std::cout << "AAnimal copy constructor called\n";
  *this = src;
}

AAnimal::~AAnimal(void) {
  std::cout << "AAnimal destructor called\n";
}

AAnimal &AAnimal::operator=(AAnimal const &rhs) {
  std::cout << "AAnimal assignment operator called\n";
  if (this != &rhs) {
    this->_type = rhs.getType();
  }
  return (*this);
}

std::string const AAnimal::getType(void) const {
  return (this->_type);
}

void AAnimal::setType(std::string const type) {
  this->_type = type;
}

std::ostream &operator<<(std::ostream &o, AAnimal const &i) {
  o << i.getType();
  return (o);
}
