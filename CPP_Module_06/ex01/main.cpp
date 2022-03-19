// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <stdint.h>

#include <iostream>

#include "Data.hpp"

int main(void) {
  Data *d1 = new Data("Bob", 1.75, 100);

  uintptr_t p1 = serialize(d1);

  std::cout << "PTR before serialization: "
            << d1
            << " "
            << d1->getName() << ": "
            << "IMC: " << d1->calculateIMC()
            << "\n";

  d1 = deserialize(p1);

  std::cout << "PTR after  serialization: "
            << d1
            << " "
            << d1->getName() << ": "
            << "IMC: " << d1->calculateIMC()
            << "\n";

  delete d1;

  return (0);
}
