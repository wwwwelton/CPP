/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 04:22:41 by wleite            #+#    #+#             */
/*   Updated: 2022/03/10 18:03:26 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
   public:
	Point(void);
	Point(float const x, float const y);
	Point(Point const &src);
	~Point(void);

	Point &operator=(Point const &src);

	Fixed const &getX(void) const;
	Fixed const &getY(void) const;
	void setX(Fixed const x);
	void setY(Fixed const y);

   private:
	Fixed const _x;
	Fixed const _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
