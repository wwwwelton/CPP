// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
  std::cout << "MateriaSource default constructor called\n";
  for (int i = 0; i < 4; i++) {
    this->_materias[i] = NULL;
  }
}

MateriaSource::MateriaSource(MateriaSource const &src) {
  std::cout << "MateriaSource copy constructor called\n";
  *this = src;
}

MateriaSource::~MateriaSource(void) {
  for (int i = 0; i < 4; i++) {
    delete this->_materias[i];
    this->_materias[i] = NULL;
  }
  std::cout << "MateriaSource destructor called\n";
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {
  std::cout << "MateriaSource assignment operator called\n";
  if (this != &rhs) {
    for (int i = 0; i < 4; i++) {
      delete this->_materias[i];
      this->_materias[i] = NULL;
      if (rhs.getAMateria(i)) {
        this->_materias[i] = rhs.getAMateria(i)->clone();
      }
    }
  }
  return (*this);
}

AMateria const *MateriaSource::getAMateria(int idx) const {
  if ((idx >= 0 && idx < 4) && this->_materias[idx] != NULL) {
    return (this->_materias[idx]);
  }
  return (NULL);
}

void MateriaSource::learnMateria(AMateria *m) {
  std::cout << "MateriaSource learnMateria function ";
  for (int i = 0; i < 4; i++) {
    if (this->_materias[i] == NULL) {
      this->_materias[i] = m;
      std::cout << "succeed\n";
      return;
    }
  }
  std::cout << "not succeed\n";
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  std::cout << "MateriaSource createMateria function ";
  for (int i = 0; i < 4; i++) {
    if (this->_materias[i] != NULL && this->_materias[i]->getType() == type) {
      std::cout << "succeed\n";
      return (this->_materias[i]->clone());
    }
  }
  std::cout << "not succeed\n";
  return (NULL);
}
