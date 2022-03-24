// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_HUMANB_HPP_
#define EX03_HUMANB_HPP_

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanB {
 public:
  explicit HumanB(std::string name);
  ~HumanB(void);

  void attack(void) const;
  void setWeapon(Weapon &weapon);

 private:
  std::string _name;
  Weapon *_weapon;
};

#endif  // EX03_HUMANB_HPP_
