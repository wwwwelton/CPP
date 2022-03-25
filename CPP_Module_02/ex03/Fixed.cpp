// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _rawBits(0) {
  return;
}

Fixed::Fixed(int const n) {
  this->_rawBits = n << Fixed::_fractionalBits;
}

Fixed::Fixed(float const f) {
  this->_rawBits = static_cast<int>(roundf(f * (1 << Fixed::_fractionalBits)));
}

Fixed::Fixed(Fixed const &src) {
  *this = src;
  return;
}

Fixed::~Fixed(void) {
  return;
}

Fixed &Fixed::operator=(Fixed const &src) {
  this->_rawBits = src.getRawBits();
  return (*this);
}

bool Fixed::operator>(Fixed const &rhs) const {
  return (this->_rawBits > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const {
  return (this->_rawBits < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const {
  return (this->_rawBits >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const {
  return (this->_rawBits <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const {
  return (this->_rawBits == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const {
  return (this->_rawBits != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) const {
  Fixed temp(this->toFloat() + rhs.toFloat());
  return (temp);
}

Fixed Fixed::operator-(Fixed const &rhs) const {
  Fixed temp(this->toFloat() - rhs.toFloat());
  return (temp);
}

Fixed Fixed::operator*(Fixed const &rhs) const {
  Fixed temp(this->toFloat() * rhs.toFloat());
  return (temp);
}

Fixed Fixed::operator/(Fixed const &rhs) const {
  Fixed temp(this->toFloat() / rhs.toFloat());
  return (temp);
}

// Prefix increment operator.
Fixed &Fixed::operator++(void) {
  ++this->_rawBits;
  return (*this);
}

// Postfix increment operator.
Fixed Fixed::operator++(int) {
  Fixed temp = *this;
  this->_rawBits++;
  return (temp);
}

// Prefix decrement operator.
Fixed &Fixed::operator--(void) {
  --this->_rawBits;
  return (*this);
}

// Postfix decrement operator.
Fixed Fixed::operator--(int) {
  Fixed temp = *this;
  this->_rawBits--;
  return (temp);
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs) {
  return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
}

Fixed const &Fixed::min(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() > rhs.getRawBits() ? rhs : lhs);
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs) {
  return (lhs.getRawBits() > rhs.getRawBits() ? lhs : rhs);
}

Fixed const &Fixed::max(Fixed const &lhs, Fixed const &rhs) {
  return (lhs.getRawBits() > rhs.getRawBits() ? lhs : rhs);
}

int Fixed::getRawBits(void) const {
  return (this->_rawBits);
}

void Fixed::setRawBits(int const raw) {
  this->_rawBits = raw;
  return;
}

float Fixed::toFloat(void) const {
  return (static_cast<float>(this->_rawBits) / (1 << Fixed::_fractionalBits));
}

int Fixed::toInt(void) const {
  return (this->_rawBits >> Fixed::_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
  return (o << i.toFloat());
}
