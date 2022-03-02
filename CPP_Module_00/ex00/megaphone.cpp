/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:12:17 by wleite            #+#    #+#             */
/*   Updated: 2022/03/02 04:12:37 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++) {
		std::string str(argv[i]);
		for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
			char c = toupper(*it);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return (0);
}
