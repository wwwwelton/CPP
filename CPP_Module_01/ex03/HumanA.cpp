/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 03:27:32 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 16:15:05 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	return;
}

HumanA::~HumanA(void) {
	return;
}

void HumanA::attack(void) const {
	std::cout
	    << this->_name
	    << " attacks with their "
	    << this->_weapon.getType()
	    << std::endl;
}
