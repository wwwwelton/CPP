// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("ClapTrap"),
                           _className("ClapTrap"),
                           _hitPoints(10),
                           _energyPoints(10),
                           _attackDamage(0) {
  std::cout << "ClapTrap default constructor called\n";
  return;
}

ClapTrap::ClapTrap(std::string const name) : _name(name),
                                             _className("ClapTrap"),
                                             _hitPoints(10),
                                             _energyPoints(10),
                                             _attackDamage(0) {
  std::cout << "ClapTrap parametric constructor called\n";
  return;
}

ClapTrap::ClapTrap(ClapTrap const &src) {
  std::cout << "ClapTrap copy constructor called\n";
  *this = src;
  return;
}

ClapTrap::~ClapTrap(void) {
  std::cout << "ClapTrap destructor called\n";
  return;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
  std::cout << "ClapTrap copy assignment operator called\n";
  const_cast<std::string &>(this->_name) = rhs.getName();
  const_cast<std::string &>(this->_className) = rhs.getClassName();
  this->_hitPoints = rhs.getHP();
  this->_energyPoints = rhs.getEP();
  this->_attackDamage = rhs.getAD();
  return (*this);
}

std::string ClapTrap::getName(void) const {
  return (this->_name);
}

std::string ClapTrap::getClassName(void) const {
  return (this->_className);
}

unsigned int ClapTrap::getHP(void) const {
  return (this->_hitPoints);
}

unsigned int ClapTrap::getEP(void) const {
  return (this->_energyPoints);
}

unsigned int ClapTrap::getAD(void) const {
  return (this->_attackDamage);
}

void ClapTrap::setName(std::string const &name) {
  const_cast<std::string &>(this->_name) = name;
}

void ClapTrap::setClassName(std::string const &className) {
  const_cast<std::string &>(this->_className) = className;
}

void ClapTrap::setHP(unsigned int hitPoints) {
  this->_hitPoints = hitPoints;
}

void ClapTrap::setEP(unsigned int energyPoints) {
  this->_energyPoints = energyPoints;
}

void ClapTrap::setAD(unsigned int attackDamage) {
  this->_attackDamage = attackDamage;
}

void ClapTrap::attack(const std::string &target) {
  if (this->getHP() == 0) {
    std::cout << this->getClassName()
              << " "
              << this->getName()
              << " cannot attack "
              << target
              << " because himself is dead.\n";
    return;
  }
  if (this->getEP() == 0) {
    std::cout << this->getClassName()
              << " "
              << this->getName()
              << " cannot attack "
              << target
              << " because he's out of energy.\n";
    return;
  }
  std::cout << this->getClassName()
            << " "
            << this->getName()
            << " attacks "
            << target << ", causing "
            << this->getAD()
            << " points of damage!\n";

  this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->getHP() == 0) {
    std::cout << this->getClassName()
              << " "
              << this->getName()
              << " cannot receive damage "
              << "because himself is dead.\n";
    return;
  }
  std::cout << this->getClassName()
            << " "
            << this->getName()
            << " received "
            << amount << " points of damage!\n";

  if (this->_hitPoints <= amount)
    this->_hitPoints = 0;
  else
    this->_hitPoints -= amount;
  if (this->getHP() <= 0) {
    std::cout << this->getClassName()
              << " "
              << this->getName()
              << " has died.\n";
  }
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->getHP() == 0) {
    std::cout << this->getClassName()
              << " "
              << this->getName()
              << " cannot be repaired "
              << "because himself is dead.\n";
    return;
  }
  if (this->getEP() == 0) {
    std::cout << this->getClassName()
              << " "
              << this->getName()
              << " cannot be repaired "
              << "because he's out of energy.\n";
    return;
  }
  std::cout << this->getClassName()
            << " "
            << this->getName()
            << " repaired herself recovering "
            << amount << " points of hit points!\n";

  if (this->_hitPoints + amount > 10)
    this->_hitPoints = 10;
  else
    this->_hitPoints += amount;

  this->_energyPoints--;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &i) {
  o << "Class: " << i.getClassName() << "\n";
  o << "Name: " << i.getName() << "\n";
  o << "HP: " << i.getHP() << "\n";
  o << "EP: " << i.getEP() << "\n";
  o << "AD: " << i.getAD() << "\n";
  return (o);
}
