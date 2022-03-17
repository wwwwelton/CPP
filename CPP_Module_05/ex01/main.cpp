// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
  Bureaucrat* b;
  Form* f;

  try {
    f = new Form("Form1", -1, 1);
    std::cout << *f;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    f = new Form("Form1", 151, 1);
    std::cout << *f;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  try {
    b = new Bureaucrat("Bob", 2);
    f = new Form("Form2", 1, 1);
    std::cout << *b;
    b->signForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  try {
    b = new Bureaucrat("Mob", 1);
    f = new Form("Form2", 1, 1);
    std::cout << *f;
    std::cout << "\n";
    std::cout << *b;
    b->signForm(*f);
    std::cout << "\n";
    std::cout << *f;
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  return (0);
}
