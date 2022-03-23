// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>
#include <list>
#include <vector>

#include "Span.hpp"

int main() {
  Span sp1 = Span(10000);
  Span sp2 = Span(25000);
  Span sp3 = Span(1);
  Span sp4 = Span(5);

  std::list<int> vect(10000, 0);
  sp1.addRange(vect.begin(), vect.end());

  std::cout << "[ Vector 1: 10K Size ]\n";
  std::cout << "Result: " << sp1.getSize() << "\n\n";

  std::cout << "[ Vector 1: not space ]\n";
  try {
    sp1.addRange(vect.begin(), vect.end());
  } catch (const std::exception& e) {
    std::cerr << e.what() << "\n\n";
  }

  for (int i = 0; i < 25000; i++) {
    sp2.addNumber(i);
  }

  std::cout << "[ Vector 2: 25K Size ]\n";
  std::cout << "Result: " << sp2.getSize() << "\n\n";

  //   std::cout << "[ Vector 2: 25K Elements ]\n";
  //   std::cout << "Result: ";

  //   for (size_t i = 0; i < 25000; i++) {
  //     std::cout << sp2.getValueAt(i) << " ";
  //   }
  //   std::cout << "\n\n";

  sp3.addNumber(1);
  std::cout << "[ Vector 3: not space ]\n";
  try {
    sp3.addNumber(99);
  } catch (const std::exception& e) {
    std::cerr << e.what() << "\n\n";
  }

  std::cout << "[ Vector 3: Shortest Span ]\n";
  try {
    sp3.shortestSpan();
  } catch (const std::exception& e) {
    std::cerr << e.what() << "\n\n";
  }

  std::cout << "[ Vector 3: Longest Span ]\n";
  try {
    sp3.longestSpan();
  } catch (const std::exception& e) {
    std::cerr << e.what() << "\n\n";
  }

  sp4.addNumber(6);
  sp4.addNumber(3);
  sp4.addNumber(17);
  sp4.addNumber(9);
  sp4.addNumber(11);

  std::cout << "[ Vector 4: Size ]\n";
  std::cout << "Result: " << sp4.getSize() << "\n\n";

  std::cout << "[ Vector 4: Shortest Span ]\n";
  std::cout << "Result: " << sp4.shortestSpan() << "\n\n";

  std::cout << "[ Vector 4: Longest Span ]\n";
  std::cout << "Result: " << sp4.longestSpan() << "\n";

  return 0;
}
