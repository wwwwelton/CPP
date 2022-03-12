/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 22:49:48 by wleite            #+#    #+#             */
/*   Updated: 2022/03/11 23:35:46 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   public:
	ScavTrap(void);
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap(void);

	ScavTrap &operator=(ScavTrap const &rhs);

	void attack(const std::string &target);
	void guardGate(void) const;
};

#endif
