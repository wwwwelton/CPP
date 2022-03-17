// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm() {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("Presidential Pardon Form", 25, 5) {
  this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm& src)
    : AForm(src) {
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
    throw AForm::UnsignedFormException();
  } else if (executor.getGrade() > this->getReqGradeExec()) {
    throw AForm::GradeTooHighException();
  } else if (executor.getGrade() <= this->getReqGradeExec()) {
    std::cout << this->getTarget()
              << " has been pardoned by Zaphod Beeblebrox.\n";
  }
}
