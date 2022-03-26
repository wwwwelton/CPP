// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_FRAGTRAP_HPP_
#define EX02_FRAGTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap(void);
  explicit FragTrap(std::string const name);
  FragTrap(FragTrap const &src);
  ~FragTrap(void);

  FragTrap &operator=(FragTrap const &rhs);

  void highFivesGuys(void);
};

#endif  // EX02_FRAGTRAP_HPP_
