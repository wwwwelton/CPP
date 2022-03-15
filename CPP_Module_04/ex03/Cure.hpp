/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 00:13:37 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 13:51:53 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "iostream"

class Cure : public AMateria {
   public:
	Cure(void);
	Cure(std::string const &type);
	Cure(Cure const &src);
	virtual ~Cure(void);

	Cure &operator=(Cure const &rhs);

	AMateria *clone(void) const;
	void use(ICharacter &target);
};

#endif
