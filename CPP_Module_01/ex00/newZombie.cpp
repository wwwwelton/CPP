// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
  Zombie* z = new Zombie(name);
  return (z);
}
