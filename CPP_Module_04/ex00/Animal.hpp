// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX00_ANIMAL_HPP_
#define EX00_ANIMAL_HPP_

#include <iostream>
#include <string>

class Animal {
 public:
  Animal(void);
  explicit Animal(std::string const type);
  Animal(Animal const &src);
  virtual ~Animal(void);

  Animal &operator=(Animal const &rhs);

  std::string const getType(void) const;
  void setType(std::string const type);
  virtual void makeSound(void) const;

 protected:
  std::string _type;
};

std::ostream &operator<<(std::ostream &o, Animal const &i);

#endif  // EX00_ANIMAL_HPP_
