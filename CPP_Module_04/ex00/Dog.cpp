// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Dog default constructor called\n";
}

Dog::Dog(Dog const &src) : Animal("Dog") {
  std::cout << "Dog copy constructor called\n";
  *this = src;
}

Dog::~Dog(void) {
  std::cout << "Dog destructor called\n";
}

Dog &Dog::operator=(Dog const &rhs) {
  std::cout << "Dog assignment operator called\n";
  if (this != &rhs) {
    this->_type = rhs.getType();
  }
  return (*this);
}

void Dog::makeSound(void) const {
  std::cout << "awawwwww!\n";
}
