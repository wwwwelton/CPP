// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Array.hpp"

int main(void) {
  Array<int> a(10);
  Array<char> b(10);
  Array<float> x(10);
  Array<float> c(x);
  Array<std::string> d(5);
  Array<int> h(0);

  std::cout << "[ INT ARRAY ]\n";
  for (size_t i = 0; i < 10; i++) {
    a[i] = static_cast<int>(i + 1);
  }
  std::cout << a;

  std::cout << "\n";

  std::cout << "[ CHAR ARRAY ]\n";
  for (size_t i = 0; i < 10; i++) {
    b[i] = static_cast<char>(i + 'a');
  }
  std::cout << b;

  std::cout << "\n";

  std::cout << "[ FLOAT ARRAY ]\n";
  for (size_t i = 0; i < 10; i++) {
    c[i] = static_cast<float>(1.1f + static_cast<float>(i));
  }
  std::cout << c;

  std::cout << "\n";

  std::cout << "[ STRING ARRAY ]\n";
  for (size_t i = 0; i < 5; i++) {
    d[i] = std::string("str") + static_cast<char>(i + '0' + 1);
  }
  std::cout << d;

  std::cout << "\n";

  std::cout << "[ Out of Range INDEX ]\n";
  try {
    h[100];
  } catch (const std::exception& e) {
    std::cerr << e.what();
  }
  try {
    h[-1];
  } catch (const std::exception& e) {
    std::cerr << e.what();
  }

  return (0);
}
