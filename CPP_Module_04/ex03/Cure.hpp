// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_CURE_HPP_
#define EX03_CURE_HPP_

#include <string>

#include "AMateria.hpp"
#include "iostream"

class Cure : public AMateria {
 public:
  Cure(void);
  explicit Cure(std::string const &type);
  Cure(Cure const &src);
  virtual ~Cure(void);

  Cure &operator=(Cure const &rhs);

  AMateria *clone(void) const;
  void use(ICharacter &target);
};

#endif  // EX03_CURE_HPP_
