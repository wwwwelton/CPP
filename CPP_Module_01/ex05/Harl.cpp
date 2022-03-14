/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:52:12 by wleite            #+#    #+#             */
/*   Updated: 2022/03/08 00:49:28 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return;
}

Harl::~Harl(void) {
	return;
}

void Harl::complain(std::string level) {
	std::string logLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
	                             &Harl::error, &Harl::invalid};

	for (int i = 0; i < 4; i++) {
		if (!logLevel[i].compare(level)) {
			(this->*f[i])();
			return;
		}
	}
	(this->*f[4])();
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn't put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!";
	std::cout << " I want to speak to the manager now." << std::endl;
}

void Harl::invalid(void) {
	std::cerr << "You need to specify a valid log level for Harl!" << std::endl;
	std::cerr << "Available options: DEBUG, INFO, WARNING, ERROR" << std::endl;
}
