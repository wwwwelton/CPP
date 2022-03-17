// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form() {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : Form("Presidential Pardon Form", 25, 5) {
  this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm& src)
    : Form(src) {
  *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
  return;
}

PresidentialPardonForm&
PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
  (void)rhs;
  return (*this);
}

const std::string& PresidentialPardonForm::getTarget(void) const {
  return (this->_target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
  if (this->getIsSigned() == false) {
    throw Form::UnsignedFormException();
  } else if (executor.getGrade() > this->getReqGradeExec()) {
    throw Form::GradeTooHighException();
  } else if (executor.getGrade() <= this->getReqGradeExec()) {
    std::cout << this->getTarget()
              << " has been pardoned by Zaphod Beeblebrox.\n";
  }
}
