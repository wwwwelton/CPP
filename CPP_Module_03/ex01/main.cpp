// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ClapTrap clap("Roboto");
  ScavTrap scav("Sovoto");

  std::cout << "\n";

  std::cout << clap << "\n";
  std::cout << scav << "\n";

  clap.attack(scav.getName());
  scav.takeDamage(clap.getAD());
  scav.guardGate();
  scav.beRepaired(1);
  std::cout << "\n";

  scav.attack(clap.getName());
  clap.takeDamage(scav.getAD());
  scav.guardGate();
  scav.beRepaired(1);
  std::cout << "\n";

  clap.attack(scav.getName());
  scav.takeDamage(clap.getAD());
  scav.guardGate();
  scav.beRepaired(1);
  std::cout << "\n";

  clap.beRepaired(1);

  std::cout << "\n";

  clap.attack(scav.getName());
  scav.takeDamage(clap.getAD());
  scav.attack(clap.getName());

  std::cout << "\n";

  clap.beRepaired(10);
  scav.beRepaired(10);

  std::cout << "\n";

  std::cout << clap << "\n";
  std::cout << scav << "\n";

  return (0);
}
