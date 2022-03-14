/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 19:00:53 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 15:46:58 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal {
   public:
	AAnimal(void);
	AAnimal(std::string const type);
	AAnimal(AAnimal const &src);
	virtual ~AAnimal(void);

	AAnimal &operator=(AAnimal const &rhs);

	std::string const getType(void) const;
	void setType(std::string const type);
	virtual void makeSound(void) const = 0;

   protected:
	std::string _type;
};

std::ostream &operator<<(std::ostream &o, AAnimal const &i);

#endif
