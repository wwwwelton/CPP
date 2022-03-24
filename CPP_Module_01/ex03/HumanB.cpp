// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
  return;
}

HumanB::~HumanB(void) {
  return;
}

void HumanB::setWeapon(Weapon &weapon) {
  this->_weapon = &weapon;
}

void HumanB::attack(void) const {
  std::cout
      << this->_name
      << " attacks with their "
      << this->_weapon->getType()
      << std::endl;
}
