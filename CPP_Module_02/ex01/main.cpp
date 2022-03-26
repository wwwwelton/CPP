// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed const b(10);
  Fixed const c(42.42f);
  Fixed const d(b);

  a = Fixed(1234.4321f);

  std::cout << "\n[ DEFAULT ]" << std::endl;
  std::cout << "a is " << a << std::endl;
  std::cout << "b is " << b << std::endl;
  std::cout << "c is " << c << std::endl;
  std::cout << "d is " << d << std::endl;

  std::cout << "\n[ TO INT ]" << std::endl;
  std::cout << "a is " << a.toInt() << " as integer" << std::endl;
  std::cout << "b is " << b.toInt() << " as integer" << std::endl;
  std::cout << "c is " << c.toInt() << " as integer" << std::endl;
  std::cout << "d is " << d.toInt() << " as integer" << std::endl;

  std::cout << "\n[ TO FLOAT ]" << std::endl;
  std::cout << "a is " << a.toFloat() << " as float" << std::endl;
  std::cout << "b is " << b.toFloat() << " as float" << std::endl;
  std::cout << "c is " << c.toFloat() << " as float" << std::endl;
  std::cout << "d is " << d.toFloat() << " as float" << std::endl;

  std::cout << std::endl;

  return (0);
}
