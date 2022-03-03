/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 04:12:44 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 04:27:59 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <sstream>

PhoneBook::PhoneBook(void) {
	this->count = 0;
	this->index = 0;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::Add(std::string firstName,
                    std::string lastName,
                    std::string nickName,
                    std::string phoneNumber,
                    std::string darkestSecret) {
	this->contacts[this->index].SetFirstName(firstName);
	this->contacts[this->index].SetLastName(lastName);
	this->contacts[this->index].SetNickName(nickName);
	this->contacts[this->index].SetPhoneNumber(phoneNumber);
	this->contacts[this->index].SetDarkestSecret(darkestSecret);
	if (this->count < 8)
		this->count++;
	this->index++;
	if (this->index > 8)
		this->index %= 8;
}

void PhoneBook::Search(int index) {
	if (index >= 0 && index < this->count && index < 8) {
		_PrintOneContact(this->contacts[index]);
	} else {
		std::cout << "Invalid contact index!" << std::endl
		          << std::endl;
	}
}

void PhoneBook::_PrintFormattedField(std::string str) {
	if (str.length() > 9) {
		std::cout << std::right << std::setw(10) << str.substr(0, 9) + '.';
	} else {
		std::cout << std::right << std::setw(10) << str;
	}
}

void PhoneBook::PrintAllContacts(void) {
	std::cout << "| ";
	std::cout << "   INDEX  ";
	std::cout << " | ";
	std::cout << "FIRST NAME";
	std::cout << " | ";
	std::cout << " LAST NAME";
	std::cout << " | ";
	std::cout << " NICKNAME ";
	std::cout << " |";
	std::cout << std::endl;
	std::cout << "-----------------------------------------------------";
	std::cout << std::endl;
	for (int i = 0; i < this->count; i++) {
		std::cout << "| ";
		std::cout << std::right << std::setw(10) << i + 1;
		std::cout << " | ";
		_PrintFormattedField(this->contacts[i].GetFirstName());
		std::cout << " | ";
		_PrintFormattedField(this->contacts[i].GetLastName());
		std::cout << " | ";
		_PrintFormattedField(this->contacts[i].GetNickName());
		std::cout << " |";
		std::cout << std::endl;
		std::cout << "-----------------------------------------------------";
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void PhoneBook::_PrintOneContact(Contact contact) {
	std::cout << "First Name: " << contact.GetFirstName() << std::endl;
	std::cout << "Last Name: " << contact.GetLastName() << std::endl;
	std::cout << "Nickname: " << contact.GetNickName() << std::endl;
	std::cout << "Phone Number: " << contact.GetPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.GetDarkestSecret() << std::endl;
	std::cout << std::endl;
}

int PhoneBook::GetContactsCount(void) {
	return (this->count);
}
