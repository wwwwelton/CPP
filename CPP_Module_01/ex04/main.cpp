/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:37:21 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 20:58:59 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>

#include "strReplaceAll.hpp"

bool validFileIn(std::ifstream &ifs, char *file) {
	ifs.open(file);
	if (ifs.fail()) {
		std::cerr << "Failed to open " << file << " file!" << std::endl;
		return (false);
	}
	return (true);
}

bool validFileOut(std::ofstream &ofs, char *file) {
	std::string fileReplace = std::string(file) + ".replace";
	ofs.open(fileReplace.c_str());
	if (ofs.fail()) {
		std::cerr << "Failed to create " << fileReplace << " file!" << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char *argv[]) {
	std::ifstream ifs;
	std::ofstream ofs;
	std::stringstream ss;

	if (argc < 4) {
		std::cerr << "Too few arguments!" << std::endl;
		return (1);
	} else if (argc > 4) {
		std::cerr << "Too many arguments!" << std::endl;
		return (1);
	} else if (validFileIn(ifs, argv[1]) && validFileOut(ofs, argv[1])) {
		ss << ifs.rdbuf();
		ofs << strReplaceAll(ss.str(), argv[2], argv[3]);
		ifs.close();
		ofs.close();
	} else
		return (1);
	return (0);
}
