// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_ROBOTOMYREQUESTFORM_HPP_
#define EX03_ROBOTOMYREQUESTFORM_HPP_

#include <cstdlib>
#include <string>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
 public:
  RobotomyRequestForm(void);
  explicit RobotomyRequestForm(const std::string& target);
  RobotomyRequestForm(const RobotomyRequestForm& src);
  virtual ~RobotomyRequestForm(void);

  RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

  const std::string& getTarget(void) const;

  void execute(const Bureaucrat& executor) const;
};

#endif  // EX03_ROBOTOMYREQUESTFORM_HPP_
