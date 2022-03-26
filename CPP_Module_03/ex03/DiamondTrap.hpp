// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_DIAMONDTRAP_HPP_
#define EX03_DIAMONDTRAP_HPP_

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
 public:
  DiamondTrap(void);
  explicit DiamondTrap(std::string const name);
  DiamondTrap(DiamondTrap const &src);
  ~DiamondTrap(void);

  DiamondTrap &operator=(DiamondTrap const &rhs);

  std::string getName(void) const;

  void attack(const std::string &target);
  void whoAmI(void);

 private:
  std::string const _name;
};

#endif  // EX03_DIAMONDTRAP_HPP_
