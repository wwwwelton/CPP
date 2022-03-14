/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:41:39 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 02:27:31 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called\n";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &src) : Animal("Dog") {
	std::cout << "Dog copy constructor called\n";
	this->_type = src.getType();
	this->_brain = new Brain(*src.getBrain());
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
	delete this->_brain;
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Dog assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
		*this->_brain = *rhs.getBrain();
	}
	return (*this);
}

Brain const *Dog::getBrain(void) const {
	return (this->_brain);
}

void Dog::makeSound(void) const {
	std::cout << "awawwwww!\n";
}