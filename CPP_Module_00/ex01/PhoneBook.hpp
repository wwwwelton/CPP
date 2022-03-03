/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:12:39 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 06:05:55 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iomanip>
#include <iostream>

#include "Contact.hpp"

class PhoneBook {
   private:
	int _count;
	int _index;
	Contact _contacts[8];

	void _printOneContact(Contact contact);

	void _printFormattedField(std::string str);

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
};

#endif
