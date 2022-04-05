// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_INTERN_HPP_
#define EX03_INTERN_HPP_

#include <exception>
#include <string>

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
  class NoMatchException : public std::exception {
   public:
    const char* what(void) const throw();
  };

 public:
  Intern(void);
  Intern(const Intern& src);
  ~Intern(void);

  Intern& operator=(const Intern& rhs);

  AForm* shrubberyCreationForm(const std::string target) const;
  AForm* robotomyRequestForm(const std::string target) const;
  AForm* presidentialPardonForm(const std::string target) const;
  AForm* invalidForm(const std::string target) const;

  AForm* makeForm(const std::string name, const std::string target);
};

#endif  // EX03_INTERN_HPP_
