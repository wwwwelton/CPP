/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:26:14 by wleite            #+#    #+#             */
/*   Updated: 2022/03/13 20:32:05 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat copy constructor called\n";
	*this = src;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called\n";
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "wrongmeowwwwww!\n";
}
