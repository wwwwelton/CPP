// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_WRONGCAT_HPP_
#define EX00_WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
  WrongCat(void);
  WrongCat(WrongCat const &src);
  virtual ~WrongCat(void);

  WrongCat &operator=(WrongCat const &rhs);

  void makeSound(void) const;
};

#endif  // EX00_WRONGCAT_HPP_
