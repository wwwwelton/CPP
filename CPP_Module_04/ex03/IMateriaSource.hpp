/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 12:06:37 by wleite            #+#    #+#             */
/*   Updated: 2022/03/15 14:17:57 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIA_SOURCE_HPP
#define IMATERIA_SOURCE_HPP

#include <string>

#include "AMateria.hpp"

class IMateriaSource {
   public:
	virtual ~IMateriaSource() {}

	virtual void learnMateria(AMateria *m) = 0;
	virtual AMateria* createMateria(std::string const& type) = 0;
};

#endif
