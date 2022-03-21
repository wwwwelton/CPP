// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "easyfind.hpp"

void print(int n) {
  std::cout << n << " ";
}

int main(void) {
  std::vector<int> v1;
  std::list<int> l1;
  std::deque<int> d1;

  // vector
  std::cout << "[ VECTOR INT ]\n";
  for (int i = 0; i < 10; i++) {
    v1.insert(v1.begin(), i + 1);
  }
  std::for_each(v1.begin(), v1.end(), print);
  std::cout << "\n\n[ SEARCH VALUE 1 ]\n";
  std::cout << "Result: ";
  try {
    std::vector<int>::iterator it1 = easyfind(v1, 1);
    std::cout << *it1 << "\n";
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  std::cout << "\n[ SEARCH VALUE 20 ]\n";
  std::cout << "Result: ";
  try {
    std::vector<int>::iterator it1 = easyfind(v1, 20);
    std::cout << *it1 << "\n";
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  // list
  std::cout << "\n\n[ LIST INT ]\n";
  for (int i = 0; i < 10; i++) {
    l1.insert(l1.begin(), i + 1);
  }
  std::for_each(l1.begin(), l1.end(), print);
  std::cout << "\n\n[ SEARCH VALUE 2 ]\n";
  std::cout << "Result: ";
  try {
    std::list<int>::iterator it2 = easyfind(l1, 2);
    std::cout << *it2 << "\n";
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  std::cout << "\n[ SEARCH VALUE 19 ]\n";
  std::cout << "Result: ";
  try {
    std::list<int>::iterator it2 = easyfind(l1, 19);
    std::cout << *it2 << "\n";
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  // deque
  std::cout << "\n\n[ DEQUE INT ]\n";
  for (int i = 0; i < 10; i++) {
    d1.insert(d1.begin(), i + 1);
  }
  std::for_each(d1.begin(), d1.end(), print);
  std::cout << "\n\n[ SEARCH VALUE 3 ]\n";
  std::cout << "Result: ";
  try {
    std::deque<int>::iterator it3 = easyfind(d1, 3);
    std::cout << *it3 << "\n";
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  std::cout << "\n[ SEARCH VALUE 18 ]\n";
  std::cout << "Result: ";
  try {
    std::deque<int>::iterator it3 = easyfind(d1, 18);
    std::cout << *it3 << "\n";
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  return (0);
}
