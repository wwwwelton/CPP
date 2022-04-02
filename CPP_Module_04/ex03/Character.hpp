// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_CHARACTER_HPP_
#define EX03_CHARACTER_HPP_

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter {
 public:
  Character(void);
  explicit Character(std::string const &name);
  Character(Character const &src);
  virtual ~Character(void);

  Character &operator=(Character const &rhs);

  AMateria const *getAMateria(int idx) const;
  std::string const &getName(void) const;
  void equip(AMateria *m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);

 private:
  std::string _name;
  AMateria *_iventory[4];
};

#endif  // EX03_CHARACTER_HPP_
