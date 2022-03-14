/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:51:45 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 15:52:03 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
   public:
	Cat(void);
	Cat(Cat const &src);
	virtual ~Cat(void);

	Cat &operator=(Cat const &rhs);

	Brain const *getBrain(void) const;
	void makeSound(void) const;

   private:
	Brain *_brain;
};

#endif
