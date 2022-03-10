/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 05:23:37 by wleite            #+#    #+#             */
/*   Updated: 2022/03/10 03:31:05 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "1 " << a << std::endl;
	std::cout << "2 " << ++a << std::endl;
	std::cout << "3 " << a << std::endl;
	std::cout << "4 " << a++ << std::endl;
	std::cout << "5 " << a << std::endl;

	std::cout << "6 " << b << std::endl;

	std::cout << "7 " << Fixed::max(a, b) << std::endl;

	return (0);
}
