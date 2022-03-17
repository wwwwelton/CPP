// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Intern.hpp"

const char* Intern::NoMatchException::what(void) const throw() {
  return ("Form does not match!");
}

Intern::Intern(void) {
  return;
}

Intern::Intern(const Intern& src) {
  *this = src;
}

Intern::~Intern(void) {
  return;
}

Intern& Intern::operator=(const Intern& rhs) {
  (void)rhs;
  return (*this);
}

AForm* Intern::makeForm(const std::string name, const std::string target) {
  std::string formType[4] = {"shrubbery creation",
                             "robotomy request",
                             "presidential pardon",
                             "invalid form"};
  int option;

  for (option = 0; option < 4; option++) {
    if (!formType[option].compare(name)) {
      break;
    }
  }

  switch (option) {
    case 0:
      std::cout << "Intern creates shrubbery creation form, target: "
                << target << ".\n";
      return (new ShrubberyCreationForm(target));
      break;
    case 1:
      std::cout << "Intern creates robotomy request form, target: "
                << target << ".\n";
      return (new RobotomyRequestForm(target));
      break;
    case 2:
      std::cout << "Intern creates presidential pardon form, target: "
                << target << ".\n";
      return (new PresidentialPardonForm(target));
      break;

    default:
      std::cout << "Intern cannot creates "
                << name
                << " because ";
      throw Intern::NoMatchException();
      return (NULL);
      break;
  }
}
