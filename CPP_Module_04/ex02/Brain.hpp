// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_BRAIN_HPP_
#define EX02_BRAIN_HPP_

#include <iostream>
#include <sstream>
#include <string>

class Brain {
 public:
  Brain(void);
  Brain(Brain const &src);
  ~Brain(void);

  Brain &operator=(Brain const &rhs);

  std::string getIdea(int const &i) const;
  void setIdea(int const &i, std::string const &idea);

 private:
  std::string _ideas[100];
};

std::ostream &operator<<(std::ostream &o, Brain const &i);

#endif  // EX02_BRAIN_HPP_
