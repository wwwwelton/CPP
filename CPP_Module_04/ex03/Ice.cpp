/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:04:10 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 22:59:59 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice default constructor called\n";
}

Ice::Ice(std::string const &type) : AMateria(type) {
	std::cout << "Ice parametric constructor called\n";
}

Ice::Ice(Ice const &src) : AMateria("ice") {
	std::cout << "Ice copy constructor called\n";
	//  Copying the type doesn’t make sense.
	*this = src;
}

Ice::~Ice(void) {
	std::cout << "Ice destructor called\n";
}

Ice &Ice::operator=(Ice const &rhs) {
	std::cout << "Ice assignment operator called\n";
	//  Copying the type doesn’t make sense.
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return (*this);
}

AMateria *Ice::clone(void) const {
	std::cout << "Ice clone function\n";
	return (new Ice());
}

void Ice::use(ICharacter &target) {
	std::cout << "Ice use function\n";
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
