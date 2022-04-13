// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Base.hpp"

Base* generate(void) {
  unsigned int seed = static_cast<unsigned int>(time(0));
  int randNum = rand_r(&seed) % (3);

  switch (randNum) {
    case 0:
      return (new A());
      break;
    case 1:
      return (new B());
      break;
    case 2:
      return (new C());
      break;

    default:
      return (NULL);
      break;
  }
}

void identify(Base* p) {
  if (dynamic_cast<A*>(p))
    std::cout << "Type: A\n";
  else if (dynamic_cast<B*>(p))
    std::cout << "Type: B\n";
  else if (dynamic_cast<C*>(p))
    std::cout << "Type: C\n";
  else
    std::cerr << "Invalid pointer\n";
}

void identify(Base& p) {
  try {
    A a = dynamic_cast<A&>(p);
    std::cout << "Type: A\n";
  } catch (const std::exception& e1) {
    try {
      B b = dynamic_cast<B&>(p);
      std::cout << "Type: B\n";
    } catch (const std::exception& e2) {
      try {
        C c = dynamic_cast<C&>(p);
        std::cout << "Type: C\n";
      } catch (const std::exception& e3) {
        std::cerr << "Invalid reference\n";
      }
    }
  }
}
