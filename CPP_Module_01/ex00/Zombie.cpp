// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Zombie.hpp"

#include <iostream>

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void) {
  std::cout << this->_name << " was destroyed!" << std::endl;
}

void Zombie::announce(void) {
  std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
