// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Zombie.hpp"

int main(void) {
  Zombie *zombies;

  zombies = zombieHorde(8, "Zombie");
  for (int i = 0; i < 8; i++) {
    zombies[i].announce();
  }
  delete[] zombies;
  return (0);
}
