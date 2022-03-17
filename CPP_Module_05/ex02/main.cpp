// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  Bureaucrat* b;
  Form* f;

  std::cout << "\n";

  try {
    b = new Bureaucrat("Bob", 1);
    f = new ShrubberyCreationForm("Bobbie");
    b->signForm(*f);
    std::cout << *f;
    b->executeForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  try {
    b = new Bureaucrat("Tob", 1);
    f = new RobotomyRequestForm("Tobbie");
    b->signForm(*f);
    std::cout << *f;
    b->executeForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  try {
    b = new Bureaucrat("Job", 1);
    f = new PresidentialPardonForm("Jobbie");
    b->signForm(*f);
    std::cout << *f;
    b->executeForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  try {
    b = new Bureaucrat("Lob", 150);
    f = new PresidentialPardonForm("Lobbie");
    b->signForm(*f);
    std::cout << *f;
    b->executeForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  try {
    b = new Bureaucrat("Pob", 20);
    f = new PresidentialPardonForm("Pobbie");
    std::cout << *b;
    b->signForm(*f);
    std::cout << *f;
    b->executeForm(*f);
    delete b;
    delete f;
  } catch (std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  std::cout << "\n";

  return (0);
}
