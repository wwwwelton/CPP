/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:51:02 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 20:11:04 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl harl;

	if (argc != 2) {
		std::cerr << "You need to specify one log level for Harl!" << std::endl;
		std::cerr << "Available options: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	} else {
		harl.complain(argv[1]);
	}
	return (0);
}
