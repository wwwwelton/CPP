// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form() {
  return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : Form("Robotomy Request Form", 72, 45) {
  this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
    : Form(src) {
  *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
  return;
}

RobotomyRequestForm&
RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
  (void)rhs;
  return (*this);
}

const std::string& RobotomyRequestForm::getTarget(void) const {
  return (this->_target);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
  unsigned int seed;
  int randNum = rand_r(&seed) % (10);

  if (this->getIsSigned() == false) {
    throw Form::UnsignedFormException();
  } else if (executor.getGrade() > this->getReqGradeExec()) {
    throw Form::GradeTooHighException();
  } else if (executor.getGrade() <= this->getReqGradeExec() && randNum < 5) {
    std::cout << "zzzzzzzz\n";
    std::cout << this->getTarget()
              << " has been robotomized successfully.\n";
  } else if (executor.getGrade() <= this->getReqGradeExec() && randNum >= 5) {
    std::cout << "zzzzzzzz\n";
    std::cout << this->getTarget()
              << " failed to be robotomized.\n";
  }
}
