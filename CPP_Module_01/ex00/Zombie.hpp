/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 00:05:50 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 01:53:53 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
   public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);

   private:
	std::string const _name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
