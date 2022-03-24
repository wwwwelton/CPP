// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#ifndef EX01_CONTACT_HPP_
#define EX01_CONTACT_HPP_

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

#endif  // EX01_CONTACT_HPP_
