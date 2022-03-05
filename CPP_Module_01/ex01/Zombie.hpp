/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:13:16 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 02:53:19 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
   public:
	Zombie(void);
	~Zombie(void);

	void announce(void);
	void setZombieName(std::string name);

   private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
