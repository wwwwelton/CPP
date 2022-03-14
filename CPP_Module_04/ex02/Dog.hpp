/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:35:17 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 15:52:15 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
   public:
	Dog(void);
	Dog(Dog const &src);
	virtual ~Dog(void);

	Dog &operator=(Dog const &rhs);

	Brain const *getBrain(void) const;
	void makeSound(void) const;

   private:
	Brain *_brain;
};

#endif
