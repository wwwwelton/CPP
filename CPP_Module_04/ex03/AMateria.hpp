// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_AMATERIA_HPP_
#define EX03_AMATERIA_HPP_

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
 public:
  AMateria(void);
  explicit AMateria(std::string const &type);
  AMateria(AMateria const &src);
  virtual ~AMateria(void);

  AMateria &operator=(AMateria const &rhs);

  std::string const &getType(void) const;
  virtual AMateria *clone(void) const = 0;
  virtual void use(ICharacter &target);

 protected:
  std::string _type;
};

#endif  // EX03_AMATERIA_HPP_
