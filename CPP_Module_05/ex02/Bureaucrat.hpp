// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_BUREAUCRAT_HPP_
#define EX02_BUREAUCRAT_HPP_

#include <exception>
#include <iostream>
#include <ostream>
#include <string>

#include "AForm.hpp"

class AForm;

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

  void signForm(const AForm& form) const;
  void executeForm(const AForm& form) const;

 private:
  const std::string _name;
  int _grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& i);

#endif  // EX02_BUREAUCRAT_HPP_
