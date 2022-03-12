/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:53:40 by wleite            #+#    #+#             */
/*   Updated: 2022/03/12 04:30:31 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	{
		ClapTrap clap("Roboto");
		ScavTrap scav("Sovoto");
		FragTrap frag("Fototo");
		DiamondTrap diam("Domoto");

		std::cout << "\n";

		std::cout << clap << "\n";
		std::cout << scav << "\n";
		std::cout << frag << "\n";
		std::cout << diam << "\n";

		clap.attack(scav.getName());
		scav.attack(frag.getName());
		frag.attack(clap.getName());
		diam.attack(frag.getName());

		std::cout << "\n";

		clap.takeDamage(frag.getAD());
		scav.takeDamage(clap.getAD());
		frag.takeDamage(scav.getAD());
		diam.takeDamage(frag.getAD());

		std::cout << "\n";

		scav.guardGate();
		frag.highFivesGuys();
		diam.whoAmI();

		std::cout << "\n";

		clap.beRepaired(10);
		scav.beRepaired(10);
		frag.beRepaired(10);
		diam.beRepaired(10);

		std::cout << "\n";

		std::cout << clap << "\n";
		std::cout << scav << "\n";
		std::cout << frag << "\n";
		std::cout << diam << "\n";
	}

	{
		std::cout << "\n===========================================";
		std::cout << "\n";
		DiamondTrap diamond("Domoto");
		std::cout << "\n";
		std::cout << diamond << "\n";
		diamond.attack(diamond.getName());
		diamond.whoAmI();
		std::cout << "\n";
	}
	std::cout << "===========================================\n";

	return (0);
}
