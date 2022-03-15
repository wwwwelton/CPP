/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:23:53 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 20:46:48 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

#include "ICharacter.hpp"

class AMateria;

class Character : public ICharacter {
   public:
	Character(void);
	Character(std::string const &name);
	Character(Character const &src);
	virtual ~Character(void);

	Character &operator=(Character const &rhs);

	AMateria const *getAMateria(int idx) const;
	std::string const &getName(void) const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

   private:
	std::string _name;
	AMateria *_iventory[4];
};

#endif
