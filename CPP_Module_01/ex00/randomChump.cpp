// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Zombie.hpp"

void randomChump(std::string name) {
  Zombie z(name);
  z.announce();
}
