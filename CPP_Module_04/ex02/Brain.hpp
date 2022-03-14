/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 23:35:30 by wleite            #+#    #+#             */
/*   Updated: 2022/03/14 00:33:25 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
   public:
	Brain(void);
	Brain(Brain const &src);
	~Brain(void);

	Brain &operator=(Brain const &rhs);

	std::string getIdea(int const &i) const;
	void setIdea(int const &i, std::string const &idea);

   private:
	std::string _ideas[100];
};

std::ostream &operator<<(std::ostream &o, Brain const &i);

#endif
