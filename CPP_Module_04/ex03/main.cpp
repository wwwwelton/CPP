// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main(void) {
  std::cout << "[ IMateriaSource constructor ]\n";
  IMateriaSource* src = new MateriaSource();

  std::cout << "\n[ Learn Materia ICE ]\n";
  src->learnMateria(new Ice());

  std::cout << "\n[ Learn Materia ICE ]\n";
  src->learnMateria(new Cure());

  std::cout << "\n[ Character creation \"me\" ]\n";
  ICharacter* me = new Character("me");

  AMateria* tmp;

  std::cout << "\n[ Create Materia ICE ]\n";
  tmp = src->createMateria("ice");

  std::cout << "\n[ Equip Materia ICE ]\n";
  me->equip(tmp);

  std::cout << "\n[ Create Materia CURE ]\n";
  tmp = src->createMateria("cure");

  std::cout << "\n[ Equip Materia CURE ]\n";
  me->equip(tmp);

  std::cout << "\n[ Character creation \"bob\" ]\n";
  ICharacter* bob = new Character("bob");

  std::cout << "\n[ Character use slot [0] ICE ]\n";
  me->use(0, *bob);

  std::cout << "\n[ Character use slot [1] CURE ]\n";
  me->use(1, *bob);

  std::cout << "\n[ Destructor character \"bob\" ]\n";
  delete bob;
  std::cout << "\n[ Destructor character \"me\" (with equipped slots) ]\n";
  delete me;

  std::cout << "\n[ Destructor IMateriaSource (with equipped slots) ]\n";
  delete src;

  return (0);
}
