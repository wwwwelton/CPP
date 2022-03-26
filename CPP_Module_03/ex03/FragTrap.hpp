// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_FRAGTRAP_HPP_
#define EX03_FRAGTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
 public:
  FragTrap(void);
  explicit FragTrap(std::string const name);
  FragTrap(FragTrap const &src);
  ~FragTrap(void);

  FragTrap &operator=(FragTrap const &rhs);

  void highFivesGuys(void);
};

#endif  // EX03_FRAGTRAP_HPP_
