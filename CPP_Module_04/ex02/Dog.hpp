// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_DOG_HPP_
#define EX02_DOG_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
 public:
  Dog(void);
  Dog(Dog const &src);
  virtual ~Dog(void);

  Dog &operator=(Dog const &rhs);

  Brain const *getBrain(void) const;
  void makeSound(void) const;

 private:
  Brain *_brain;
};

#endif  // EX02_DOG_HPP_
