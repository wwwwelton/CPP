/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:51:02 by wleite            #+#    #+#             */
/*   Updated: 2022/03/08 00:09:31 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen karen;

	if (argc != 2) {
		std::cerr << "You need to specify one log level for Karen!" << std::endl;
		std::cerr << "Available options: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return (1);
	} else {
		karen.complain(argv[1]);
	}
	return (0);
}
