/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 23:45:16 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 16:24:55 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called\n";
	std::stringstream ss;
	std::string s;
	for (int i = 0; i < 100; i++) {
		ss << i + 1 << " ";
		ss >> s;
		this->_ideas[i] = "Idea: " + s;
	}
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain copy constructor called\n";
	*this = src;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called\n";
}

Brain &Brain::operator=(Brain const &rhs) {
	std::cout << "Brain assignment operator called\n";
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->_ideas[i] = rhs.getIdea(i);
		}
	}
	return (*this);
}

std::string Brain::getIdea(int const &i) const {
	return (this->_ideas[i]);
}

void Brain::setIdea(int const &i, std::string const &idea) {
	this->_ideas[i] = idea;
}

std::ostream &operator<<(std::ostream &o, Brain const &i) {
	for (int j = 0; j < 100; j++) {
		o << i.getIdea(j) << "\n";
	}
	return (o);
}
