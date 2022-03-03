/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:12:48 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 06:07:58 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>

class Contact {
   public:
	std::string getFirstName(void);
	std::string getLastName(void);
	std::string getNickName(void);
	std::string getPhoneNumber(void);
	std::string getDarkestSecret(void);

	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickName(std::string nickName);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string darkestSecret);

   private:
	std::string _firstName, _lastName, _nickName, _phoneNumber, _darkestSecret;
};

#endif
