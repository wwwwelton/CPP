/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:07:34 by wleite            #+#    #+#             */
/*   Updated: 2022/03/11 23:52:44 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {
   public:
	ClapTrap(void);
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &src);
	~ClapTrap(void);

	ClapTrap &operator=(ClapTrap const &rhs);

	std::string getName(void) const;
	std::string getClassName(void) const;
	unsigned int getHP(void) const;
	unsigned int getEP(void) const;
	unsigned int getAD(void) const;

	void setName(std::string const &name);
	void setClassName(std::string const &className);
	void setHP(unsigned int hitPoints);
	void setEP(unsigned int energyPoints);
	void setAD(unsigned int attackDamage);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

   protected:
	std::string const _name;
	std::string const _className;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif
