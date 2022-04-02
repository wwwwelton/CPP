// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
  std::cout << "WrongAnimal default constructor called\n";
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type) {
  std::cout << "WrongAnimal parametric constructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
  std::cout << "WrongAnimal copy constructor called\n";
  *this = src;
}

WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs) {
  std::cout << "WrongAnimal assignment operator called\n";
  if (this != &rhs) {
    this->_type = rhs.getType();
  }
  return (*this);
}

std::string const WrongAnimal::getType(void) const {
  return (this->_type);
}

void WrongAnimal::setType(std::string const type) {
  this->_type = type;
}

void WrongAnimal::makeSound(void) const {
  std::cout << "wrongrawrrrrr!\n";
}

std::ostream &operator<<(std::ostream &o, WrongAnimal const &i) {
  o << i.getType();
  return (o);
}
