// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include <iostream>

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const Animal *animals[10];

  std::cout << "\nConstructors: \n\n";
  std::cout << "Dog\n";
  std::cout << "=====================\n";
  for (int i = 0; i < 5; i++) {
    animals[i] = new Dog();
  }
  std::cout << "\nCat\n";
  std::cout << "=====================\n";
  for (int i = 5; i < 10; i++) {
    animals[i] = new Cat();
  }

  std::cout << "\nDestructors: \n\n";
  std::cout << "Dog\n";
  std::cout << "=====================\n";
  for (int i = 0; i < 5; i++) {
    delete animals[i];
  }
  std::cout << "\nDestructors: \n\n";
  std::cout << "Cat\n";
  std::cout << "=====================\n";
  for (int i = 5; i < 10; i++) {
    delete animals[i];
  }

  std::cout << "\nBrain: \n\n";
  std::cout << "Cat ideas\n";
  std::cout << "=====================\n";
  Cat *cat = new Cat();
  std::cout << "\n";
  std::cout << *cat->getBrain();
  std::cout << "\n";
  delete cat;

  return (0);
}
