// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
  this->_count = 0;
  this->_index = 0;
}

PhoneBook::~PhoneBook(void) {
  return;
}

void PhoneBook::add(std::string firstName,
                    std::string lastName,
                    std::string nickName,
                    std::string phoneNumber,
                    std::string darkestSecret) {
  this->_contacts[this->_index].setFirstName(firstName);
  this->_contacts[this->_index].setLastName(lastName);
  this->_contacts[this->_index].setNickName(nickName);
  this->_contacts[this->_index].setPhoneNumber(phoneNumber);
  this->_contacts[this->_index].setDarkestSecret(darkestSecret);
  if (this->_count < 8)
    this->_count++;
  this->_index++;
  if (this->_index >= 8)
    this->_index %= 8;
}

void PhoneBook::search(int index) {
  if (index >= 0 && index < this->_count && index < 8) {
    _printOneContact(this->_contacts[index]);
  } else {
    std::cout << "Invalid contact index!" << std::endl
              << std::endl;
  }
}

void PhoneBook::_printFormattedField(std::string str) {
  if (str.length() > 9) {
    std::cout << std::right << std::setw(10) << str.substr(0, 9) + '.';
  } else {
    std::cout << std::right << std::setw(10) << str;
  }
}

void PhoneBook::printAllContacts(void) {
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
  for (int i = 0; i < this->_count; i++) {
    std::cout << "| ";
    std::cout << std::right << std::setw(10) << i + 1;
    std::cout << " | ";
    _printFormattedField(this->_contacts[i].getFirstName());
    std::cout << " | ";
    _printFormattedField(this->_contacts[i].getLastName());
    std::cout << " | ";
    _printFormattedField(this->_contacts[i].getNickName());
    std::cout << " |";
    std::cout << std::endl;
    std::cout << "-----------------------------------------------------";
    std::cout << std::endl;
  }
  std::cout << std::endl;
}

void PhoneBook::_printOneContact(Contact contact) {
  std::cout << "First Name: " << contact.getFirstName() << std::endl;
  std::cout << "Last Name: " << contact.getLastName() << std::endl;
  std::cout << "Nickname: " << contact.getNickName() << std::endl;
  std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
  std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
  std::cout << std::endl;
}

int PhoneBook::getContactsCount(void) {
  return (this->_count);
}
