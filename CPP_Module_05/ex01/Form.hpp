// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_FORM_HPP_
#define EX01_FORM_HPP_

#include <exception>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  Form(void);
  Form(const std::string name, const int reqGradeSign, const int reqGradeExec);
  Form(const Form& src);
  ~Form(void);

  Form& operator=(const Form& rhs);

  const std::string& getName(void) const;
  bool getIsSigned(void) const;
  int getReqGradeSign(void) const;
  int getReqGradeExec(void) const;

  void beSigned(const Bureaucrat& b);

 private:
  const std::string _name;
  bool _isSigned;
  const int _reqGradeSign;
  const int _reqGradeExec;
};

std::ostream& operator<<(std::ostream& o, const Form& i);

#endif  // EX01_FORM_HPP_
