/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:12:48 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 04:16:53 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>

class Contact {
   public:
	std::string GetFirstName(void);
	std::string GetLastName(void);
	std::string GetNickName(void);
	std::string GetPhoneNumber(void);
	std::string GetDarkestSecret(void);

	void SetFirstName(std::string firstName);
	void SetLastName(std::string lastName);
	void SetNickName(std::string nickName);
	void SetPhoneNumber(std::string phoneNumber);
	void SetDarkestSecret(std::string darkestSecret);

   private:
	std::string firstName, lastName, nickName, phoneNumber, darkestSecret;
};

#endif
