// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what(void) const throw() {
  return ("Invalid Bureaucrat Grade, to high!");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw() {
  return ("Invalid Bureaucrat Grade, to low!");
}

Bureaucrat::Bureaucrat(void) : _name(""), _grade(0) {
  return;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade)
    : _name(name), _grade(grade) {
  if (this->_grade < 1) {
    throw GradeTooHighException();
  }
  if (this->_grade > 150) {
    throw GradeTooLowException();
  }
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
  *this = src;
  if (src.getGrade() < 1) {
    throw GradeTooHighException();
  }
  if (src.getGrade() > 150) {
    throw GradeTooLowException();
  }
}

Bureaucrat::~Bureaucrat(void) {
  return;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
  if (this != &rhs) {
    const_cast<std::string&>(this->_name) = rhs.getName();
    this->_grade = rhs.getGrade();
  }
  return (*this);
}

const std::string& Bureaucrat::getName(void) const {
  return (this->_name);
}

int Bureaucrat::getGrade(void) const {
  return (this->_grade);
}

void Bureaucrat::incrementGrade(void) {
  if ((this->_grade - 1) < 1) {
    throw GradeTooLowException();
  } else {
    this->_grade--;
  }
}

void Bureaucrat::decrementGrade(void) {
  if ((this->_grade + 1) > 150) {
    throw GradeTooLowException();
  } else {
    this->_grade++;
  }
}

void Bureaucrat::signForm(const AForm& form) const {
  try {
    (*const_cast<AForm*>(&form)).beSigned(*this);
    std::cout << this->getName() << " signed " << form.getName() << ".\n";
  } catch (const std::exception& e) {
    std::cout << this->getName()
              << " couldn't sign "
              << form.getName()
              << " because "
              << e.what()
              << "\n";
  }
}

void Bureaucrat::executeForm(const AForm& form) const {
  try {
    form.execute(*this);
    std::cout << this->getName() << " executed " << form.getName() << ".\n";
  } catch (const std::exception& e) {
    std::cout << this->getName()
              << " couldn't execute "
              << form.getName()
              << " because "
              << e.what()
              << "\n";
  }
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& i) {
  o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".\n";
  return (o);
}
