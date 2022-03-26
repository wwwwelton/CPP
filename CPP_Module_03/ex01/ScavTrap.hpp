// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_SCAVTRAP_HPP_
#define EX01_SCAVTRAP_HPP_

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
  ScavTrap(void);
  explicit ScavTrap(std::string const name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap(void);

  ScavTrap &operator=(ScavTrap const &rhs);

  void attack(const std::string &target);
  void guardGate(void) const;
};

#endif  // EX01_SCAVTRAP_HPP_
