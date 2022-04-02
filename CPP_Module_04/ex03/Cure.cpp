// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
  std::cout << "Cure default constructor called\n";
}

Cure::Cure(std::string const &type) : AMateria(type) {
  std::cout << "Cure parametric constructor called\n";
}

Cure::Cure(Cure const &src) : AMateria("cure") {
  std::cout << "Cure copy constructor called\n";
  //  Copying the type doesn’t make sense.
  *this = src;
}

Cure::~Cure(void) {
  std::cout << "Cure destructor called\n";
}

Cure &Cure::operator=(Cure const &rhs) {
  std::cout << "Cure assignment operator called\n";
  //  Copying the type doesn’t make sense.
  if (this != &rhs) {
    this->_type = rhs.getType();
  }
  return (*this);
}

AMateria *Cure::clone(void) const {
  std::cout << "Cure clone function\n";
  return (new Cure());
}

void Cure::use(ICharacter &target) {
  std::cout << "Cure use function\n";
  std::cout << "* heals " << target.getName() << "'s wounds *\n";
}
