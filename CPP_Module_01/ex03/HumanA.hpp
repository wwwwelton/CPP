/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 03:27:48 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 16:16:12 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>

#include "Weapon.hpp"

class HumanA {
   public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void attack(void) const;

   private:
	std::string _name;
	Weapon &_weapon;
};

#endif
