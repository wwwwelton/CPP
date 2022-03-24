// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "main.hpp"

bool validPhoneNumber(std::string phoneNumber) {
  std::string set = "0123456789 -()";

  if (phoneNumber.length() < 8) {
    std::cout << "Invalid phone number!"
              << std::endl
              << std::endl;
    return (false);
  }
  for (std::string::iterator it = phoneNumber.begin();
       it != phoneNumber.end(); ++it) {
    if (set.find(*it) == std::string::npos) {
      std::cout << "Invalid phone number!"
                << std::endl
                << std::endl;
      return (false);
    }
  }
  return (true);
}

bool validContactField(std::string field, std::string fieldName) {
  for (std::string::iterator it = field.begin(); it != field.end(); ++it) {
    if (!std::isalnum(*it)) {
      std::cout << fieldName
                << " field accepts only alphanumeric ascii characters!"
                << std::endl
                << std::endl;
      return (false);
    }
  }
  return (true);
}

void addContact(PhoneBook &myPhoneBook) {
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
  if (!validContactField(firstName, "First Name"))
    return;
  std::cout << "Last Name: ";
  std::getline(std::cin, lastName);
  if (!validContactField(lastName, "Last Name"))
    return;
  std::cout << "Nickname: ";
  std::getline(std::cin, nickName);
  if (!validContactField(nickName, "Nickname"))
    return;
  std::cout << "Phone Number: ";
  std::getline(std::cin, phoneNumber);
  if (!validPhoneNumber(phoneNumber))
    return;
  std::cout << "Darkest Secret: ";
  std::getline(std::cin, darkestSecret);
  myPhoneBook.add(firstName, lastName, nickName, phoneNumber, darkestSecret);
  std::cout << "Contact " << firstName
            << " added to your phonebook." << std::endl
            << std::endl;
}

void searchContact(PhoneBook myPhoneBook) {
  std::string option;
  std::stringstream ss;
  int index;

  std::cout << CLEAR;
  if (myPhoneBook.getContactsCount() == 0) {
    std::cout << "The phonebook is empty!" << std::endl
              << std::endl;
    return;
  }
  myPhoneBook.printAllContacts();
  std::cout << "Please enter the contact index: ", std::cin >> option;
  ss << option;
  ss >> index;
  myPhoneBook.search(index - 1);
}

int main(void) {
  PhoneBook myPhoneBook;
  std::string option;

  while (1) {
    std::cout << "Please choose one of the options: "
              << "ADD, SEARCH or EXIT" << std::endl;
    std::cin >> option;
    if (option == "ADD") {
      addContact(myPhoneBook);
    } else if (option == "SEARCH") {
      searchContact(myPhoneBook);
    } else if (option == "EXIT") {
      break;
    } else {
      std::cout << CLEAR << "Invalid option!" << std::endl
                << std::endl;
    }
  }
  return (0);
}
