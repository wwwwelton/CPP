/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 23:58:39 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 13:51:43 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "iostream"

class Ice : public AMateria {
   public:
	Ice(void);
	Ice(std::string const &type);
	Ice(Ice const &src);
	virtual ~Ice(void);

	Ice &operator=(Ice const &rhs);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
