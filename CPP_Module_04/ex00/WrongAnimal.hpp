// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_WRONGANIMAL_HPP_
#define EX00_WRONGANIMAL_HPP_

#include <iostream>
#include <string>

class WrongAnimal {
 public:
  WrongAnimal(void);
  explicit WrongAnimal(std::string const type);
  WrongAnimal(WrongAnimal const &src);
  virtual ~WrongAnimal(void);

  WrongAnimal &operator=(WrongAnimal const &rhs);

  std::string const getType(void) const;
  void setType(std::string const type);
  void makeSound(void) const;

 protected:
  std::string _type;
};

std::ostream &operator<<(std::ostream &o, WrongAnimal const &i);

#endif  // EX00_WRONGANIMAL_HPP_
