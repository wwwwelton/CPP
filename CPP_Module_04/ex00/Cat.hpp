// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_CAT_HPP_
#define EX00_CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal {
 public:
  Cat(void);
  Cat(Cat const &src);
  virtual ~Cat(void);

  Cat &operator=(Cat const &rhs);

  void makeSound(void) const;
};

#endif  // EX00_CAT_HPP_
