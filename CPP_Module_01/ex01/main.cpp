/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:12:55 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 03:07:31 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *zombies;

	zombies = zombieHorde(8, "Zombie");
	for (int i = 0; i < 8; i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
