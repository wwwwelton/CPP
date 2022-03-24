// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_HUMANA_HPP_
#define EX03_HUMANA_HPP_

#include <iostream>
#include <string>

#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA(void);

  void attack(void) const;

 private:
  std::string _name;
  Weapon &_weapon;
};

#endif  // EX03_HUMANA_HPP_
