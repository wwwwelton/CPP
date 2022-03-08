/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:51:28 by wleite            #+#    #+#             */
/*   Updated: 2022/03/08 00:33:05 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen {
   public:
	Karen(void);
	~Karen(void);

	void complain(std::string level);

   private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void invalid(void);
};

#endif
