// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_ICE_HPP_
#define EX03_ICE_HPP_

#include <string>

#include "AMateria.hpp"
#include "iostream"

class Ice : public AMateria {
 public:
  Ice(void);
  explicit Ice(std::string const &type);
  Ice(Ice const &src);
  virtual ~Ice(void);

  Ice &operator=(Ice const &rhs);

  AMateria *clone(void) const;
  void use(ICharacter &target);
};

#endif  // EX03_ICE_HPP_
