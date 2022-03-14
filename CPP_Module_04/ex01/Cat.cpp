/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:54:10 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 02:27:31 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called\n";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal("Cat") {
	std::cout << "Cat copy constructor called\n";
	this->_type = src.getType();
	this->_brain = new Brain(*src.getBrain());
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called\n";
	delete this->_brain;
}

Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Cat assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
		*this->_brain = *rhs.getBrain();
	}
	return (*this);
}

Brain const *Cat::getBrain(void) const {
	return (this->_brain);
}

void Cat::makeSound(void) const {
	std::cout << "meowwwww!\n";
}