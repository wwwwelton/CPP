// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Zombie.hpp"

int main(void) {
  Zombie *john;

  john = newZombie("John");
  john->announce();
  randomChump("Zack");
  delete john;
  return (0);
}
