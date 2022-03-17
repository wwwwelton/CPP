// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "AForm.hpp"

const char* AForm::GradeTooHighException::what(void) const throw() {
  return ("Form required Grade is too high!");
}

const char* AForm::GradeTooLowException::what(void) const throw() {
  return ("Form required Grade is too low!");
}

const char* AForm::FileOutputException::what(void) const throw() {
  return ("Cannot write the file output!");
}

const char* AForm::UnsignedFormException::what(void) const throw() {
  return ("Form is not signed!");
}

AForm::AForm(void) : _target(""),
                     _name(""),
                     _isSigned(false),
                     _reqGradeSign(0),
                     _reqGradeExec(0) {
  return;
}

AForm::AForm(const std::string name,
             const int reqGradeSign,
             const int reqGradeExec) : _target(""),
                                       _name(name),
                                       _isSigned(false),
                                       _reqGradeSign(reqGradeSign),
                                       _reqGradeExec(reqGradeExec) {
  if (this->_reqGradeSign < 1 || this->_reqGradeExec < 1) {
    throw GradeTooHighException();
  }
  if (this->_reqGradeSign > 150 || this->_reqGradeExec > 150) {
    throw GradeTooLowException();
  }
}

AForm::AForm(const AForm& src) : _target(""),
                                 _name(""),
                                 _isSigned(false),
                                 _reqGradeSign(0),
                                 _reqGradeExec(0) {
  *this = src;
  if (src.getReqGradeSign() < 1 || src.getReqGradeExec() < 1) {
    throw GradeTooHighException();
  }
  if (src.getReqGradeSign() > 150 || src.getReqGradeExec() > 150) {
    throw GradeTooLowException();
  }
}

AForm::~AForm(void) {
  return;
}

AForm& AForm::operator=(const AForm& rhs) {
  if (this != &rhs) {
    const_cast<std::string&>(this->_target) = rhs.getTarget();
    const_cast<std::string&>(this->_name) = rhs.getName();
    this->_isSigned = rhs.getIsSigned();
    const_cast<int&>(this->_reqGradeSign) = rhs.getReqGradeSign();
    const_cast<int&>(this->_reqGradeExec) = rhs.getReqGradeExec();
  }
  return (*this);
}

const std::string& AForm::getName(void) const {
  return (this->_name);
}

bool AForm::getIsSigned(void) const {
  return (this->_isSigned);
}

int AForm::getReqGradeSign(void) const {
  return (this->_reqGradeSign);
}

int AForm::getReqGradeExec(void) const {
  return (this->_reqGradeExec);
}

const std::string& AForm::getTarget(void) const {
  return (this->_target);
}

void AForm::setTarget(const std::string& target) {
  const_cast<std::string&>(this->_target) = target;
}

void AForm::beSigned(const Bureaucrat& b) {
  if (b.getGrade() <= this->_reqGradeSign) {
    this->_isSigned = true;
  }
  if (b.getGrade() > this->_reqGradeSign) {
    throw AForm::GradeTooHighException();
  }
}

std::ostream& operator<<(std::ostream& o, const AForm& i) {
  o << "Form: " << i.getName() << "\n";
  o << "Target: " << i.getTarget() << "\n";
  o << "Signed: " << (i.getIsSigned() ? "Yes" : "No")
    << "\n";
  o << "Grade to sign: " << i.getReqGradeSign() << "\n";
  o << "Grade to exec: " << i.getReqGradeExec() << "\n";
  return (o);
}
