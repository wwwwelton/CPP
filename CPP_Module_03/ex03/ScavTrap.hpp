// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_SCAVTRAP_HPP_
#define EX03_SCAVTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
 public:
  ScavTrap(void);
  explicit ScavTrap(std::string const name);
  ScavTrap(ScavTrap const &src);
  ~ScavTrap(void);

  ScavTrap &operator=(ScavTrap const &rhs);

  void attack(const std::string &target);
  void guardGate(void) const;
};

#endif  // EX03_SCAVTRAP_HPP_
