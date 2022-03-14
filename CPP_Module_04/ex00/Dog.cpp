/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:41:39 by wleite            #+#    #+#             */
/*   Updated: 2022/03/13 20:00:17 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(Dog const &src) : Animal("Dog") {
	std::cout << "Dog copy constructor called\n";
	*this = src;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called\n";
}

Dog &Dog::operator=(Dog const &rhs) {
	std::cout << "Dog copy assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "awawwwww!\n";
}
