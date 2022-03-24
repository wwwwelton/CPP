// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_PHONEBOOK_HPP_
#define EX01_PHONEBOOK_HPP_

#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

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

#endif  // EX01_PHONEBOOK_HPP_
