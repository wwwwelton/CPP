/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:00:53 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 01:49:09 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
   public:
	Animal(void);
	Animal(std::string const type);
	Animal(Animal const &src);
	virtual ~Animal(void);

	Animal &operator=(Animal const &rhs);

	std::string const getType(void) const;
	void setType(std::string const type);
	virtual void makeSound(void) const;

   protected:
	std::string _type;
};

std::ostream &operator<<(std::ostream &o, Animal const &i);

#endif
