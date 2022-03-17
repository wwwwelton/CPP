// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP_
#define EX02_SHRUBBERYCREATIONFORM_HPP_

#include <fstream>
#include <string>

#include "../ex02/Form.hpp"

class ShrubberyCreationForm : public Form {
 public:
  ShrubberyCreationForm(void);
  explicit ShrubberyCreationForm(const std::string& target);
  ShrubberyCreationForm(const ShrubberyCreationForm& src);
  virtual ~ShrubberyCreationForm(void);

  ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

  const std::string& getTarget(void) const;

  void execute(const Bureaucrat& executor) const;
};

#endif  // EX02_SHRUBBERYCREATIONFORM_HPP_
