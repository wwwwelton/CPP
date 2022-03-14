/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:51:28 by wleite            #+#    #+#             */
/*   Updated: 2022/03/08 00:33:05 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {
   public:
	Harl(void);
	~Harl(void);

	void complain(std::string level);

   private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void invalid(void);
};

#endif
