/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:33:07 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 23:15:01 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("") {
	std::cout << "Character default constructor called\n";
	for (int i = 0; i < 4; i++) {
		this->_iventory[i] = NULL;
	}
}

Character::Character(std::string const &name) : _name(name) {
	std::cout << "Character parametric constructor called\n";
	for (int i = 0; i < 4; i++) {
		this->_iventory[i] = NULL;
	}
}

Character::Character(Character const &src) {
	std::cout << "Character copy constructor called\n";
	*this = src;
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++) {
		delete this->_iventory[i];
		this->_iventory[i] = NULL;
	}
	std::cout << "Character destructor called\n";
}

Character &Character::operator=(Character const &rhs) {
	std::cout << "Character assignment operator called\n";
	if (this != &rhs) {
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++) {
			delete this->_iventory[i];
			this->_iventory[i] = NULL;
			if (rhs.getAMateria(i)) {
				this->_iventory[i] = rhs.getAMateria(i)->clone();
			}
		}
	}
	return (*this);
}

AMateria const *Character::getAMateria(int idx) const {
	if ((idx >= 0 && idx < 4) && this->_iventory[idx] != NULL) {
		return (this->_iventory[idx]);
	}
	return (NULL);
}

std::string const &Character::getName(void) const {
	return (this->_name);
}

void Character::equip(AMateria *m) {
	std::cout << "Character " << this->getName() << " equip function ";
	for (int i = 0; i < 4; i++) {
		if (this->_iventory[i] == NULL) {
			this->_iventory[i] = m;
			std::cout << "succeed\n";
			return;
		}
	}
	std::cout << "not succeed\n";
}

void Character::unequip(int idx) {
	std::cout << "Character " << this->getName() << " unequip function ";
	if ((idx >= 0 && idx < 4) && this->_iventory[idx] != NULL) {
		this->_iventory[idx] = NULL;
		std::cout << "succeed\n";
		return;
	}
	std::cout << "not succeed\n";
}

void Character::use(int idx, ICharacter &target) {
	std::cout << "Character " << this->getName() << " use function ";
	if ((idx >= 0 && idx < 4) && this->_iventory[idx] != NULL) {
		std::cout << "succeed\n";
		this->_iventory[idx]->use(target);
		return;
	}
	std::cout << "not succeed\n";
}
