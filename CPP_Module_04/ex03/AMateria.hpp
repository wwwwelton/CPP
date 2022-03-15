/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:41:42 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 20:22:08 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#include "ICharacter.hpp"

class ICharacter;

class AMateria {
   public:
	AMateria(void);
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria(void);

	AMateria &operator=(AMateria const &rhs);

	std::string const &getType(void) const;
	virtual AMateria *clone(void) const = 0;
	virtual void use(ICharacter &target);

   protected:
	std::string _type;
};

#endif
