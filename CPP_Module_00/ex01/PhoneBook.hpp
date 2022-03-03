/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:12:39 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 03:35:16 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iomanip>
#include <iostream>

#include "Contact.hpp"

class PhoneBook {
   private:
	int count;
	int index;
	Contact contacts[8];

	void PrintOneContact(Contact contact);

	void PrintFormattedField(std::string str);

   public:
	PhoneBook(void);
	~PhoneBook(void);

	void Add(std::string firstName,
	         std::string lastName,
	         std::string nickName,
	         std::string phoneNumber,
	         std::string darkestSecret);

	void PrintAllContacts(void);

	void Search(int index);

	int GetContactsCount(void);
};

#endif
