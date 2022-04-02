// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_DOG_HPP_
#define EX00_DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal {
 public:
  Dog(void);
  Dog(Dog const &src);
  virtual ~Dog(void);

  Dog &operator=(Dog const &rhs);

  void makeSound(void) const;
};

#endif  // EX00_DOG_HPP_
