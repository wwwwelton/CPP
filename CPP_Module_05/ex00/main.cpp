// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Bureaucrat.hpp"

int main(void) {
  Bureaucrat* b;

  try {
    b = new Bureaucrat("Bob", -1);
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Lob", 1);
    b->incrementGrade();
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Tob", 151);
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Lob", 150);
    b->decrementGrade();
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Job", 1);
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Xob", 5);
    b->incrementGrade();
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Fob", 75);
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Pob", 76);
    b->decrementGrade();
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  try {
    b = new Bureaucrat("Mob", 150);
    std::cout << *b;
    delete b;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  return (0);
}
