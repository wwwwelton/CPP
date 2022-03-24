// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX06_HARL_HPP_
#define EX06_HARL_HPP_

#include <iostream>
#include <string>

class Harl {
 public:
  Harl(void);
  ~Harl(void);

  void complain(std::string level);

 private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void invalid(void);
};

#endif  // EX06_HARL_HPP_
