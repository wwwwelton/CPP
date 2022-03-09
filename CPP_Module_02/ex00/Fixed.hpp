/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 03:29:39 by wleite            #+#    #+#             */
/*   Updated: 2022/03/09 14:21:04 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
   public:
	Fixed(void);
	Fixed(Fixed const &src);
	~Fixed(void);

	Fixed &operator=(Fixed const &src);

	int getRawBits(void) const;
	void setRawBits(int const raw);

   private:
	int _rawBits;
	static int const _fractionalBits;
};

#endif
