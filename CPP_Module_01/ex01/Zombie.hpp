// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_ZOMBIE_HPP_
#define EX01_ZOMBIE_HPP_

#include <string>

class Zombie {
 public:
  Zombie(void);
  ~Zombie(void);

  void announce(void);
  void setZombieName(std::string name);

 private:
  std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif  // EX01_ZOMBIE_HPP_
