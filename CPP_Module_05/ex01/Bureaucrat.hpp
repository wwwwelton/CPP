// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_BUREAUCRAT_HPP_
#define EX01_BUREAUCRAT_HPP_

#include <exception>
#include <iostream>
#include <ostream>
#include <string>

#include "Form.hpp"

class Form;

class Bureaucrat {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  Bureaucrat(void);
  Bureaucrat(const std::string name, const int grade);
  Bureaucrat(const Bureaucrat& src);
  ~Bureaucrat(void);

  Bureaucrat& operator=(const Bureaucrat& rhs);

  const std::string& getName(void) const;
  int getGrade(void) const;
  void incrementGrade(void);
  void decrementGrade(void);

  void signForm(const Form& f) const;

 private:
  const std::string _name;
  int _grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& i);

#endif  // EX01_BUREAUCRAT_HPP_
