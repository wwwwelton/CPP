/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:12:39 by wleite            #+#    #+#             */
/*   Updated: 2022/03/05 00:28:19 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iomanip>
#include <iostream>
#include <sstream>

#include "Contact.hpp"

class PhoneBook {
   public:
	PhoneBook(void);
	~PhoneBook(void);

	void add(std::string firstName,
	         std::string lastName,
	         std::string nickName,
	         std::string phoneNumber,
	         std::string darkestSecret);

	void printAllContacts(void);

	void search(int index);

	int getContactsCount(void);

   private:
	int _count;
	int _index;
	Contact _contacts[8];

	void _printOneContact(Contact contact);

	void _printFormattedField(std::string str);
};

#endif
