// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
  return;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
  return;
}

Point::Point(Point const &src) {
  *this = src;
  return;
}

Point::~Point(void) {
  return;
}

Point &Point::operator=(const Point &src) {
  const_cast<Fixed &>(this->_x) = src.getX();
  const_cast<Fixed &>(this->_y) = src.getY();
  return (*this);
}

Fixed const &Point::getX(void) const {
  return (this->_x);
}

Fixed const &Point::getY(void) const {
  return (this->_y);
}

void Point::setX(Fixed const x) {
  const_cast<Fixed &>(this->_x) = x;
}

void Point::setY(Fixed const y) {
  const_cast<Fixed &>(this->_y) = y;
}
