/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:35:17 by wleite            #+#    #+#             */
/*   Updated: 2022/03/13 21:04:28 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
   public:
	Dog(void);
	Dog(Dog const &src);
	virtual ~Dog(void);

	Dog &operator=(Dog const &rhs);

	void makeSound(void) const;
};

#endif
