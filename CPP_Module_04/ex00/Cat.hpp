/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:51:45 by wleite            #+#    #+#             */
/*   Updated: 2022/03/13 21:04:24 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
   public:
	Cat(void);
	Cat(Cat const &src);
	virtual ~Cat(void);

	Cat &operator=(Cat const &rhs);

	void makeSound(void) const;
};

#endif
