// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

int main(int argc, char *argv[]) {
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
  for (int i = 1; i < argc; i++) {
    std::string str(argv[i]);
    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
      char c = toupper(*it);
      std::cout << c;
    }
  }
  std::cout << std::endl;
  return (0);
}
