// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "iter.hpp"

int main(void) {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  char arr2[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
  float arr3[10] = {0.0f, 0.1f, 0.2f, 0.3f, 0.4f, 0.5f, 0.6f, 0.7f, 0.8f, 0.9f};

  std::cout << "[ INT ARRAY ]\n";
  iter(arr, 10, print2);
  std::cout << "\n";

  std::cout << "\n";

  std::cout << "[ CHAR ARRAY ]\n";
  iter(arr2, 10, print2);
  std::cout << "\n";

  std::cout << "\n";

  std::cout << "[ FLOAT ARRAY ]\n";
  iter(arr3, 10, print2);
  std::cout << "\n";

  return (0);
}
