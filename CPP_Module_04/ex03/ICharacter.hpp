// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_ICHARACTER_HPP_
#define EX03_ICHARACTER_HPP_

#include <string>

#include "AMateria.hpp"

class AMateria;

class ICharacter {
 public:
  virtual ~ICharacter() {}

  virtual std::string const &getName(void) const = 0;
  virtual void equip(AMateria *m) = 0;
  virtual void unequip(int idx) = 0;
  virtual void use(int idx, ICharacter &target) = 0;
};

#endif  // EX03_ICHARACTER_HPP_
