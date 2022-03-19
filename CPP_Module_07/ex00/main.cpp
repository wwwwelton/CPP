// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "whatever.hpp"

int main(void) {
  int a = 2;
  int b = 3;

  std::cout << "[ BEFORE SWAP INT ]\n";
  std::cout << "a = " << a << ", b = " << b << std::endl;
  ::swap(a, b);
  std::cout << "\n";
  std::cout << "[ AFTER SWAP INT ]\n";
  std::cout << "a = " << a << ", b = " << b << std::endl;

  std::cout << "\n";

  std::cout << "[ MIN INT ]\n";
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;

  std::cout << "\n";

  std::cout << "[ MAX INT ]\n";
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

  std::cout << "\n";

  std::string c = "chaine1";
  std::string d = "chaine2";

  std::cout << "[ BEFORE SWAP STR ]\n";
  std::cout << "c = " << c << ", d = " << d << std::endl;

  std::cout << "\n";

  ::swap(c, d);
  std::cout << "[ AFTER SWAP STR ]\n";
  std::cout << "c = " << c << ", d = " << d << std::endl;

  std::cout << "\n";

  std::cout << "[ MIN STR ]\n";
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;

  std::cout << "\n";

  std::cout << "[ MAX STR ]\n";
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
  return (0);
}
