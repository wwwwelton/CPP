/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:52:10 by wleite            #+#    #+#             */
/*   Updated: 2022/03/12 01:43:05 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap default constructor called\n";
	this->setName("ScavTrap");
	this->setClassName("ScavTrap");
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	return;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	std::cout << "ScavTrap parametric constructor called\n";
	this->setClassName("ScavTrap");
	this->setHP(100);
	this->setEP(50);
	this->setAD(20);
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap() {
	std::cout << "ScavTrap copy constructor called\n";
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called\n";
	return;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	std::cout << "ScavTrap copy assignment operator called\n";
	const_cast<std::string &>(this->_name) = rhs.getName();
	const_cast<std::string &>(this->_className) = rhs.getClassName();
	this->_hitPoints = rhs.getHP();
	this->_energyPoints = rhs.getEP();
	this->_attackDamage = rhs.getAD();
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (this->getHP() == 0) {
		std::cout << this->getClassName()
		          << " "
		          << this->getName()
		          << " cannot hit "
		          << target
		          << " because himself is dead.\n";
		return;
	}
	if (this->getEP() == 0) {
		std::cout << this->getClassName()
		          << " "
		          << this->getName()
		          << " cannot hit "
		          << target
		          << " because he's out of energy.\n";
		return;
	}
	std::cout << this->getClassName()
	          << " "
	          << this->getName()
	          << " hits "
	          << target << ", causing "
	          << this->getAD()
	          << " points of damage!\n";

	this->_energyPoints--;
}

void ScavTrap::guardGate(void) const {
	if (this->getHP() == 0) {
		std::cout << this->getClassName()
		          << " "
		          << this->getName()
		          << " cannot enter in Gate keeper mode"
		          << " because himself is dead.\n";
		return;
	}
	std::cout << this->getClassName()
	          << " "
	          << this->getName()
	          << " is now in Gate keeper mode.\n";
}
