// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_ZOMBIE_HPP_
#define EX00_ZOMBIE_HPP_

#include <string>

class Zombie {
 public:
  explicit Zombie(std::string name);
  ~Zombie(void);

  void announce(void);

 private:
  std::string const _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif  // EX00_ZOMBIE_HPP_
