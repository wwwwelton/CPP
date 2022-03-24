// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(void) {
  return;
}

Zombie::~Zombie(void) {
  std::cout << this->_name << " was destroyed!" << std::endl;
}

void Zombie::setZombieName(std::string name) {
  this->_name = name;
}

void Zombie::announce(void) {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
