// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ClapTrap clap("Roboto");
  ScavTrap scav("Sovoto");
  FragTrap frag("Fototo");

  std::cout << "\n";

  std::cout << clap << "\n";
  std::cout << scav << "\n";
  std::cout << frag << "\n";

  clap.attack(scav.getName());
  scav.attack(frag.getName());
  frag.attack(clap.getName());

  std::cout << "\n";

  clap.takeDamage(frag.getAD());
  scav.takeDamage(clap.getAD());
  frag.takeDamage(scav.getAD());

  std::cout << "\n";

  scav.guardGate();
  frag.highFivesGuys();

  std::cout << "\n";

  clap.beRepaired(10);
  scav.beRepaired(10);
  frag.beRepaired(10);

  std::cout << "\n";

  std::cout << clap << "\n";
  std::cout << scav << "\n";
  std::cout << frag << "\n";

  return (0);
}
