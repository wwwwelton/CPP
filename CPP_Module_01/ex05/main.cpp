// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Harl.hpp"

int main(int argc, char *argv[]) {
  Harl harl;

  if (argc != 2) {
    std::cerr << "You need to specify one log level for Harl!" << std::endl;
    std::cerr << "Available options: DEBUG, INFO, WARNING, ERROR" << std::endl;
    return (1);
  } else {
    harl.complain(argv[1]);
  }
  return (0);
}
