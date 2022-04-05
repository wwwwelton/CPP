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

AForm* Intern::shrubberyCreationForm(const std::string target) const {
  return (new ShrubberyCreationForm(target));
}

AForm* Intern::robotomyRequestForm(const std::string target) const {
  return (new RobotomyRequestForm(target));
}

AForm* Intern::presidentialPardonForm(const std::string target) const {
  return (new PresidentialPardonForm(target));
}

AForm* Intern::invalidForm(const std::string target) const {
  (void)target;
  return (NULL);
}

AForm* Intern::makeForm(const std::string name, const std::string target) {
  std::string formType[4] = {"shrubbery creation",
                             "robotomy request",
                             "presidential pardon",
                             "invalid form"};
  AForm* (Intern::*f[4])(const std::string) const = {
      &Intern::shrubberyCreationForm,
      &Intern::robotomyRequestForm,
      &Intern::presidentialPardonForm,
      &Intern::invalidForm};

  for (int i = 0; i < 3; i++) {
    if (!formType[i].compare(name)) {
      return ((this->*f[i])(target));
    }
  }
  throw Intern::NoMatchException();
  return ((this->*f[4])(target));
}
