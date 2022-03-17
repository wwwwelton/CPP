// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP_
#define EX02_PRESIDENTIALPARDONFORM_HPP_

#include <string>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
 public:
  PresidentialPardonForm(void);
  explicit PresidentialPardonForm(const std::string& target);
  PresidentialPardonForm(const PresidentialPardonForm& src);
  virtual ~PresidentialPardonForm(void);

  PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

  const std::string& getTarget(void) const;

  void execute(const Bureaucrat& executor) const;
};

#endif  // EX02_PRESIDENTIALPARDONFORM_HPP_
