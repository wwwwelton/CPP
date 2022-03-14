/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:26:16 by wleite            #+#    #+#             */
/*   Updated: 2022/03/13 21:04:32 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
   public:
	WrongCat(void);
	WrongCat(WrongCat const &src);
	virtual ~WrongCat(void);

	WrongCat &operator=(WrongCat const &rhs);

	void makeSound(void) const;
};

#endif
