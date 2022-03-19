// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Base.hpp"

int main(void) {
  std::cout << "[ CLASS A ]\n";
  A *a = new A();
  identify(a);
  identify(*a);
  delete a;

  std::cout << "\n";

  std::cout << "[ CLASS B ]\n";
  B *b = new B();
  identify(b);
  identify(*b);
  delete b;

  std::cout << "\n";

  std::cout << "[ CLASS C ]\n";
  C *c = new C();
  identify(c);
  identify(*c);
  delete c;

  std::cout << "\n";

  std::cout << "[ CLASS INVALID ]\n";
  Base *base = new Base();
  identify(base);
  identify(*base);
  delete base;

  std::cout << "\n";

  std::cout << "[ RANDOM CLASS]\n";
  Base *random = generate();
  identify(random);
  identify(*random);
  delete random;

  return (0);
}
