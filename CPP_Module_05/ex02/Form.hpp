// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_FORM_HPP_
#define EX02_FORM_HPP_

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

  class FileOutputException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  class UnsignedFormException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  Form(void);
  Form(const std::string name, const int reqGradeSign, const int reqGradeExec);
  Form(const Form& src);
  virtual ~Form(void);

  Form& operator=(const Form& rhs);

  const std::string& getName(void) const;
  bool getIsSigned(void) const;
  int getReqGradeSign(void) const;
  int getReqGradeExec(void) const;

  virtual const std::string& getTarget(void) const;
  void setTarget(const std::string& target);

  void beSigned(const Bureaucrat& b);

  virtual void execute(const Bureaucrat& executor) const = 0;

 protected:
  const std::string _target;

 private:
  const std::string _name;
  bool _isSigned;
  const int _reqGradeSign;
  const int _reqGradeExec;
};

std::ostream& operator<<(std::ostream& o, const Form& i);

#endif  // EX02_FORM_HPP_
