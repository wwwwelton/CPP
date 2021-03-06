// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _rawBits(0) {
  std::cout << "Default constructor called\n";
  return;
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
  std::cout << "getRawBits member function called\n";
  return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
  this->_rawBits = raw;
  return;
}
