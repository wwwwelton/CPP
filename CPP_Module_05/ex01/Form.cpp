// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Form.hpp"

const char* Form::GradeTooHighException::what(void) const throw() {
  return ("Form required Grade is too high!");
}

const char* Form::GradeTooLowException::what(void) const throw() {
  return ("Form required Grade is too low!");
}

Form::Form(void) : _name(""),
                   _isSigned(false),
                   _reqGradeSign(0),
                   _reqGradeExec(0) {
  return;
}

Form::Form(const std::string name,
           const int reqGradeSign,
           const int reqGradeExec) : _name(name),
                                     _isSigned(false),
                                     _reqGradeSign(reqGradeSign),
                                     _reqGradeExec(reqGradeExec) {
  if (this->_reqGradeSign < 1) {
    throw GradeTooHighException();
  }
  if (this->_reqGradeSign > 150) {
    throw GradeTooLowException();
  }
}

Form::Form(const Form& src) : _name(""),
                              _isSigned(false),
                              _reqGradeSign(0),
                              _reqGradeExec(0) {
  *this = src;
  if (src.getReqGradeSign() < 1) {
    throw GradeTooHighException();
  }
  if (src.getReqGradeSign() > 150) {
    throw GradeTooLowException();
  }
}

Form::~Form(void) {
  return;
}

Form& Form::operator=(const Form& rhs) {
  if (this != &rhs) {
    const_cast<std::string&>(this->_name) = rhs.getName();
    this->_isSigned = rhs.getIsSigned();
    const_cast<int&>(this->_reqGradeSign) = rhs.getReqGradeSign();
    const_cast<int&>(this->_reqGradeExec) = rhs.getReqGradeExec();
  }
  return (*this);
}

const std::string& Form::getName(void) const {
  return (this->_name);
}

bool Form::getIsSigned(void) const {
  return (this->_isSigned);
}

int Form::getReqGradeSign(void) const {
  return (this->_reqGradeSign);
}

int Form::getReqGradeExec(void) const {
  return (this->_reqGradeExec);
}

void Form::beSigned(const Bureaucrat& b) {
  if (b.getGrade() <= this->_reqGradeSign) {
    this->_isSigned = true;
  }
  if (b.getGrade() > this->_reqGradeSign) {
    throw Form::GradeTooHighException();
  }
}

std::ostream& operator<<(std::ostream& o, const Form& i) {
  o << "Form: " << i.getName() << "\n";
  o << "Signed: " << (i.getIsSigned() ? "Yes" : "No")
    << "\n";
  o << "Grade to sign: " << i.getReqGradeSign() << "\n";
  o << "Grade to exec: " << i.getReqGradeExec() << "\n";
  return (o);
}
