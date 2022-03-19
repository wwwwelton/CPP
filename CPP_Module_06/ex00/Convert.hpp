// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.
#ifndef EX00_CONVERT_HPP_
#define EX00_CONVERT_HPP_

#include <cstdlib>
#include <sstream>
#include <string>

class Convert {
 public:
  Convert(void);
  explicit Convert(const std::string& raw);
  Convert(const Convert& src);
  ~Convert(void);

  Convert& operator=(const Convert& rhs);

  operator char();
  operator int();
  operator float();
  operator double();

  std::string getInput(void) const;
  double getRaw(void) const;

  std::string charToPrint(void);
  std::string intToPrint(void);
  std::string floatToPrint(void);
  std::string doubleToPrint(void);

 private:
  const std::string _input;
  double _raw;
};

#endif  // EX00_CONVERT_HPP_
