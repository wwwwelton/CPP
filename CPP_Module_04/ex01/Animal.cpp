// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
  std::cout << "Animal default constructor called\n";
}

Animal::Animal(std::string const type) : _type(type) {
  std::cout << "Animal parametric constructor called\n";
}

Animal::Animal(Animal const &src) {
  std::cout << "Animal copy constructor called\n";
  *this = src;
}

Animal::~Animal(void) {
  std::cout << "Animal destructor called\n";
}

Animal &Animal::operator=(Animal const &rhs) {
  std::cout << "Animal assignment operator called\n";
  if (this != &rhs) {
    this->_type = rhs.getType();
  }
  return (*this);
}

std::string const Animal::getType(void) const {
  return (this->_type);
}

void Animal::setType(std::string const type) {
  this->_type = type;
}

void Animal::makeSound(void) const {
  std::cout << "rawrrrrr!\n";
}

std::ostream &operator<<(std::ostream &o, Animal const &i) {
  o << i.getType();
  return (o);
}
