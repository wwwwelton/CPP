// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_CLAPTRAP_HPP_
#define EX03_CLAPTRAP_HPP_

#include <iostream>
#include <string>

class ClapTrap {
 public:
  ClapTrap(void);
  explicit ClapTrap(std::string const name);
  ClapTrap(ClapTrap const &src);
  ~ClapTrap(void);

  ClapTrap &operator=(ClapTrap const &rhs);

  virtual std::string getName(void) const;
  std::string getClassName(void) const;
  unsigned int getHP(void) const;
  unsigned int getEP(void) const;
  unsigned int getAD(void) const;

  virtual void setName(std::string const &name);
  void setClassName(std::string const &className);
  void setHP(unsigned int hitPoints);
  void setEP(unsigned int energyPoints);
  void setAD(unsigned int attackDamage);

  virtual void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 protected:
  std::string const _name;
  std::string const _className;
  unsigned int _hitPoints;
  unsigned int _energyPoints;
  unsigned int _attackDamage;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif  // EX03_CLAPTRAP_HPP_
