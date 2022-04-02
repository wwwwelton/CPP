// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
  std::cout << "Cat default constructor called\n";
  this->_brain = new Brain();
}

Cat::Cat(Cat const &src) : AAnimal("Cat") {
  std::cout << "Cat copy constructor called\n";
  this->_brain = new Brain(*src.getBrain());
  *this = src;
}

Cat::~Cat(void) {
  std::cout << "Cat destructor called\n";
  delete this->_brain;
}

Cat &Cat::operator=(Cat const &rhs) {
  std::cout << "Cat assignment operator called\n";
  if (this != &rhs) {
    this->_type = rhs.getType();
    *this->_brain = *rhs.getBrain();
  }
  return (*this);
}

Brain const *Cat::getBrain(void) const {
  return (this->_brain);
}

void Cat::makeSound(void) const {
  std::cout << "meowwwww!\n";
}
