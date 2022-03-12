/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:53:52 by wleite            #+#    #+#             */
/*   Updated: 2022/03/12 04:07:03 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(),
                                 ScavTrap(),
                                 FragTrap(),
                                 _name("DiamondTrap") {
	std::cout << "DiamondTrap default constructor called\n";
	this->setName("DiamondTrap_clap_name");
	this->setClassName("DiamondTrap");
	this->setHP(100);
	this->setEP(50);
	this->setAD(30);
	return;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"),
                                                   ScavTrap(name + "_clap_name"),
                                                   FragTrap(name + "_clap_name"),
                                                   _name(name) {
	std::cout << "DiamondTrap parametric constructor called\n";
	this->setClassName("DiamondTrap");
	this->setHP(100);
	this->setEP(50);
	this->setAD(30);
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(),
                                                   ScavTrap(),
                                                   FragTrap() {
	std::cout << "DiamondTrap copy constructor called\n";
	*this = src;
	return;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called\n";
	return;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
	std::cout << "DiamondTrap copy assignment operator called\n";
	const_cast<std::string &>(this->_name) = rhs.getName();
	const_cast<std::string &>(this->_className) = rhs.getClassName();
	this->_hitPoints = rhs.getHP();
	this->_energyPoints = rhs.getEP();
	this->_attackDamage = rhs.getAD();
	return (*this);
}

std::string DiamondTrap::getName(void) const {
	return (this->_name);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "Im "
	          << "Diamond: " << getName()
	          << " and "
	          << "ClapTrap: " << ClapTrap::_name << ".\n";
}
