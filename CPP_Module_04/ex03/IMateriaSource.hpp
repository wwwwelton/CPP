// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_IMATERIASOURCE_HPP_
#define EX03_IMATERIASOURCE_HPP_

#include <string>

#include "AMateria.hpp"

class IMateriaSource {
 public:
  virtual ~IMateriaSource() {}

  virtual void learnMateria(AMateria* m) = 0;
  virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif  // EX03_IMATERIASOURCE_HPP_
