// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm() {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("Shrubbery Creation Form", 145, 137) {
  this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
    : AForm(src) {
  *this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
  return;
}

ShrubberyCreationForm&
ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs) {
  (void)rhs;
  return (*this);
}

const std::string& ShrubberyCreationForm::getTarget(void) const {
  return (this->_target);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
  if (this->getIsSigned() == false) {
    throw AForm::UnsignedFormException();
  } else if (executor.getGrade() > this->getReqGradeExec()) {
    throw AForm::GradeTooHighException();
  } else if (executor.getGrade() <= this->getReqGradeExec()) {
    std::string fileOutput(this->getTarget() + "_shrubbery");
    std::ofstream ofs(fileOutput.c_str());
    if (ofs.fail()) {
      throw AForm::FileOutputException();
    }
    std::string tree =
        "       ###       \n"
        "      #o###      \n"
        "    #####o###    \n"
        "   #o#\\#|#/##    \n"
        "    ###\\|/#o#    \n"
        "     # }|{  #    \n"
        "       }|{       \n";
    ofs << tree;
    ofs.close();
  }
}
