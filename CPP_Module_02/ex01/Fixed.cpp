// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Fixed.hpp"

#include <cmath>

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _rawBits(0) {
  std::cout << "Default constructor called\n";
  return;
}

Fixed::Fixed(int const n) {
  std::cout << "Int constructor called\n";
  this->_rawBits = n << _fractionalBits;
}

Fixed::Fixed(float const f) {
  std::cout << "Float constructor called\n";
  this->_rawBits = static_cast<int>(roundf(f * (1 << _fractionalBits)));
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
  return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
  this->_rawBits = raw;
  return;
}

float Fixed::toFloat(void) const {
  return (static_cast<float>(this->_rawBits) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const {
  return (this->_rawBits >> _fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
  o << i.toFloat();
  return (o);
}
