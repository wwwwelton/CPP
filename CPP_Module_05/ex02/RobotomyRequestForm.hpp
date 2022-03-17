// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP_
#define EX02_ROBOTOMYREQUESTFORM_HPP_

#include <cstdlib>
#include <string>

#include "Form.hpp"

class RobotomyRequestForm : public Form {
 public:
  RobotomyRequestForm(void);
  explicit RobotomyRequestForm(const std::string& target);
  RobotomyRequestForm(const RobotomyRequestForm& src);
  virtual ~RobotomyRequestForm(void);

  RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

  const std::string& getTarget(void) const;

  void execute(const Bureaucrat& executor) const;
};

#endif  // EX02_ROBOTOMYREQUESTFORM_HPP_
