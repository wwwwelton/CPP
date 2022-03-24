// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
  Zombie* zombies = new Zombie[N];

  for (int i = 0; i < N; i++) {
    zombies[i].setZombieName(name);
  }
  return (zombies);
}
