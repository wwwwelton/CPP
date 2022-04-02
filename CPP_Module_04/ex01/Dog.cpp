// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
  std::cout << "Dog default constructor called\n";
  this->_brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal("Dog") {
  std::cout << "Dog copy constructor called\n";
  this->_brain = new Brain(*src.getBrain());
  *this = src;
}

Dog::~Dog(void) {
  std::cout << "Dog destructor called\n";
  delete this->_brain;
}

Dog &Dog::operator=(Dog const &rhs) {
  std::cout << "Dog assignment operator called\n";
  if (this != &rhs) {
    this->_type = rhs.getType();
    *this->_brain = *rhs.getBrain();
  }
  return (*this);
}

Brain const *Dog::getBrain(void) const {
  return (this->_brain);
}

void Dog::makeSound(void) const {
  std::cout << "awawwwww!\n";
}
