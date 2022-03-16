// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_BUREAUCRAT_HPP_
#define EX00_BUREAUCRAT_HPP_

#include <exception>
#include <ostream>
#include <string>

class Bureaucrat {
 public:
  class GradeTooHighException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char* what(void) const throw();
  };

  Bureaucrat(void);
  Bureaucrat(const std::string name, const int grade);
  Bureaucrat(const Bureaucrat& src);
  ~Bureaucrat(void);

  Bureaucrat& operator=(const Bureaucrat& rhs);

  const std::string& getName(void) const;
  int getGrade(void) const;
  void incrementGrade(void);
  void decrementGrade(void);

 private:
  const std::string _name;
  int _grade;
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& i);

#endif  // EX00_BUREAUCRAT_HPP_
