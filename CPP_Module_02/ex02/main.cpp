// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));

  std::cout << "\n[ PDF Test ]" << std::endl;
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;

  std::cout << b << std::endl;

  std::cout << Fixed::max(a, b) << std::endl;

  Fixed c(1);
  Fixed d(2);
  std::cout << "\n[ Comparison operator test ]" << std::endl;
  std::cout << "c = " << c << " | " << "d = " << d << std::endl;
  std::cout << "\n[ c  > d ]" << " result: " << (c > d);
  std::cout << "\n[ c  < d ]" << " result: " << (c < d);
  std::cout << "\n[ c >= d ]" << " result: " << (c >= d);
  std::cout << "\n[ c <= d ]" << " result: " << (c <= d);
  std::cout << "\n[ c == d ]" << " result: " << (c == d);
  std::cout << "\n[ c != d ]" << " result: " << (c != d) << std::endl;

  c = Fixed(2);
  d = Fixed(4);
  std::cout << "\n[ Math operator test ]" << std::endl;
  std::cout << "c = " << c << " | " << "d = " << d << std::endl;
  std::cout << "\n[ c + d ]" << " result: " << (c + d);
  std::cout << "\n[ c - d ]" << " result: " << (c - d);
  std::cout << "\n[ c * d ]" << " result: " << (c * d);
  std::cout << "\n[ c / d ]" << " result: " << (c / d) << std::endl;

  c = Fixed(1);
  std::cout << "\n[ Increment/Deprecrement test ]" << std::endl;
  std::cout << "c = " << c << std::endl;
  std::cout << "\n[ c++ ]" << " result: " << (c++);
  std::cout << "\n[ ++c ]" << " result: " << (++c);
  std::cout << "\n[ c-- ]" << " result: " << (c--);
  std::cout << "\n[ --c ]" << " result: " << (--c) << std::endl;

  c = Fixed(10);
  d = Fixed(20);
  std::cout << "\n[ Min/Max test ]" << std::endl;
  std::cout << "c = " << c << " | " << "d = " << d << std::endl;
  std::cout << "\n[ min ]" << " result: " << Fixed::min(c, d);
  std::cout << "\n[ max ]" << " result: " << Fixed::max(c, d) << std::endl;
  return (0);
}
