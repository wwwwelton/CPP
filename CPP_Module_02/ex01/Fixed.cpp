/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 03:30:32 by wleite            #+#    #+#             */
/*   Updated: 2022/03/09 14:14:10 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _fixedPointNbr(0) {
	std::cout << "Default constructor called\n";
	return;
}

Fixed::Fixed(int const n) {
	std::cout << "Int constructor called\n";
	this->_fixedPointNbr = n << _fractionalBits;
}

Fixed::Fixed(float const n) {
	std::cout << "Float constructor called\n";
	this->_fixedPointNbr = static_cast<int>(roundf(n * (1 << _fractionalBits)));
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called\n";
	*this = src;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
	return;
}

Fixed &Fixed::operator=(Fixed const &src) {
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(src.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const {
	return (this->_fixedPointNbr);
}

void Fixed::setRawBits(int const raw) {
	this->_fixedPointNbr = raw;
	return;
}

float Fixed::toFloat(void) const {
	return (static_cast<float>(this->_fixedPointNbr) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const {
	return (this->_fixedPointNbr >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
	o << i.toFloat();
	return (o);
}
