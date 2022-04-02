// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX02_AANIMAL_HPP_
#define EX02_AANIMAL_HPP_

#include <iostream>
#include <string>

class AAnimal {
 public:
  AAnimal(void);
  explicit AAnimal(std::string const type);
  AAnimal(AAnimal const &src);
  virtual ~AAnimal(void);

  AAnimal &operator=(AAnimal const &rhs);

  std::string const getType(void) const;
  void setType(std::string const type);
  virtual void makeSound(void) const = 0;

 protected:
  std::string _type;
};

std::ostream &operator<<(std::ostream &o, AAnimal const &i);

#endif  // EX02_AANIMAL_HPP_
