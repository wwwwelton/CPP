// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX03_MATERIASOURCE_HPP_
#define EX03_MATERIASOURCE_HPP_

#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"

class MateriaSource : public IMateriaSource {
 public:
  MateriaSource(void);
  MateriaSource(MateriaSource const &src);
  virtual ~MateriaSource(void);

  MateriaSource &operator=(MateriaSource const &rhs);

  AMateria const *getAMateria(int idx) const;
  void learnMateria(AMateria *m);
  AMateria *createMateria(std::string const &type);

 private:
  AMateria *_materias[4];
};

#endif  // EX03_MATERIASOURCE_HPP_
