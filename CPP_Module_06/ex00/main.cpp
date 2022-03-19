// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Convert.hpp"

int main(int argc, char* argv[]) {
  if (argc == 2) {
    const std::string raw(argv[1]);
    Convert conv(raw);
    std::cout << "char: " << conv.charToPrint() << "\n";
    std::cout << "int: " << conv.intToPrint() << "\n";
    std::cout << "float: " << conv.floatToPrint() << "\n";
    std::cout << "double: " << conv.doubleToPrint() << "\n";
  } else {
    std::cerr << "Please insert one valid string ou char per time!\n";
    std::cerr << "Example: \"-42\", \"-4.2f\", \"c\"\n";
    return (1);
  }
  return (0);
}
