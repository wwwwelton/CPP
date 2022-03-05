/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 03:25:14 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 16:32:59 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
   public:
	Weapon(std::string type);
	~Weapon(void);

	const std::string &getType(void) const;
	void setType(std::string type);

   private:
	std::string _type;
};

#endif
