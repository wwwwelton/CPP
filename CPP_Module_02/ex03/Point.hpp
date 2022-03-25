// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_POINT_HPP_
#define EX03_POINT_HPP_

#include "Fixed.hpp"

class Point {
 public:
  Point(void);
  Point(float const x, float const y);
  Point(Point const &src);
  ~Point(void);

  Point &operator=(Point const &src);

  Fixed const &getX(void) const;
  Fixed const &getY(void) const;
  void setX(Fixed const x);
  void setY(Fixed const y);

 private:
  Fixed const _x;
  Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif  // EX03_POINT_HPP_
