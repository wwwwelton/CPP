// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
  return;
}

HumanA::~HumanA(void) {
  return;
}

void HumanA::attack(void) const {
  std::cout
      << this->_name
      << " attacks with their "
      << this->_weapon.getType()
      << std::endl;
}
