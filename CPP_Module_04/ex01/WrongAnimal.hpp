/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:12:07 by wleite            #+#    #+#             */
/*   Updated: 2022/03/13 23:28:08 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
   public:
	WrongAnimal(void);
	WrongAnimal(std::string const type);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal(void);

	WrongAnimal &operator=(WrongAnimal const &rhs);

	std::string const getType(void) const;
	void setType(std::string const type);
	void makeSound(void) const;

   protected:
	std::string _type;
};

std::ostream &operator<<(std::ostream &o, WrongAnimal const &i);

#endif
