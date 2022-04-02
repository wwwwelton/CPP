// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
  std::cout << "Cat default constructor called\n";
}

Cat::Cat(Cat const &src) : Animal("Cat") {
  std::cout << "Cat copy constructor called\n";
  *this = src;
}

Cat::~Cat(void) {
  std::cout << "Cat destructor called\n";
}

Cat &Cat::operator=(Cat const &rhs) {
  std::cout << "Cat assignment operator called\n";
  if (this != &rhs) {
    this->_type = rhs.getType();
  }
  return (*this);
}

void Cat::makeSound(void) const {
  std::cout << "meowwwww!\n";
}
