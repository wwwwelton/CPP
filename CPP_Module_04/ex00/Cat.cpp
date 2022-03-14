/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:54:10 by wleite            #+#    #+#             */
/*   Updated: 2022/03/13 20:00:09 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(Cat const &src) : Animal("Cat") {
	std::cout << "Cat copy constructor called\n";
	*this = src;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called\n";
}

Cat &Cat::operator=(Cat const &rhs) {
	std::cout << "Cat copy assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "meowwwww!\n";
}
