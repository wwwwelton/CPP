/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:44:25 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 23:15:05 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("") {
	std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria parametric constructor called\n";
}

AMateria::AMateria(AMateria const &src) {
	std::cout << "AMateria copy constructor called\n";
	*this = src;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria destructor called\n";
}

AMateria &AMateria::operator=(AMateria const &rhs) {
	std::cout << "AMateria assignment operator called\n";
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

std::string const &AMateria::getType(void) const {
	return (this->_type);
}

void AMateria::use(ICharacter &target) {
	std::cout << "* materia cannot be used at " << target.getName() << " *\n";
}
