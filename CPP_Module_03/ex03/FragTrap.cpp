/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:11:45 by wleite            #+#    #+#             */
/*   Updated: 2022/03/12 02:18:04 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor called\n";
	this->setName("FragTrap");
	this->setClassName("FragTrap");
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	return;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	std::cout << "FragTrap parametric constructor called\n";
	this->setClassName("FragTrap");
	this->setHP(100);
	this->setEP(100);
	this->setAD(30);
	return;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap() {
	std::cout << "FragTrap copy constructor called\n";
	*this = src;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called\n";
	return;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	std::cout << "FragTrap copy assignment operator called\n";
	const_cast<std::string &>(this->_name) = rhs.getName();
	const_cast<std::string &>(this->_className) = rhs.getClassName();
	this->_hitPoints = rhs.getHP();
	this->_energyPoints = rhs.getEP();
	this->_attackDamage = rhs.getAD();
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	if (this->getHP() == 0) {
		std::cout << this->getClassName()
		          << " "
		          << this->getName()
		          << " cannot displays a positive high fives"
		          << " because himself is dead.\n";
		return;
	}
	std::cout << "✋\n";
}
