// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_CAT_HPP_
#define EX02_CAT_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
 public:
  Cat(void);
  Cat(Cat const &src);
  virtual ~Cat(void);

  Cat &operator=(Cat const &rhs);

  Brain const *getBrain(void) const;
  void makeSound(void) const;

 private:
  Brain *_brain;
};

#endif  // EX02_CAT_HPP_
