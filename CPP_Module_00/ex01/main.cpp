/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:21:07 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 04:19:42 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void AddContact(PhoneBook &myPhoneBook) {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << CLEAR;
	std::cout << "Please input the contact information:" << std::endl;
	std::cin.ignore();
	std::cout << "First Name: ";
	std::getline(std::cin, firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nickName);
	std::cout << "Phone Number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
	myPhoneBook.Add(firstName, lastName, nickName, phoneNumber, darkestSecret);
	std::cout << "Contact " << firstName << " added to your phonebook." << std::endl
	          << std::endl;
}

void SearchContact(PhoneBook myPhoneBook) {
	std::string option;
	std::stringstream ss;
	int index;

	std::cout << CLEAR;
	if (myPhoneBook.GetContactsCount() == 0) {
		std::cout << "The phonebook is empty!" << std::endl
		          << std::endl;
		return;
	}
	myPhoneBook.PrintAllContacts();
	std::cout << "Please enter the contact index: ", std::cin >> option;
	ss << option;
	ss >> index;
	myPhoneBook.Search(index - 1);
}

int main(void) {
	PhoneBook myPhoneBook;
	std::string option;

	while (1) {
		std::cout << "Please choose one of the options: "
		          << "ADD, SEARCH or EXIT" << std::endl;
		std::cin >> option;
		if (option == "ADD") {
			AddContact(myPhoneBook);
		} else if (option == "SEARCH") {
			SearchContact(myPhoneBook);
		} else if (option == "EXIT") {
			break;
		} else {
			std::cout << CLEAR << "Invalid option!" << std::endl
			          << std::endl;
		}
	}
	return (0);
}
