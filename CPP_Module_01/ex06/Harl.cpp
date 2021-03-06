// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Harl.hpp"

Harl::Harl(void) {
  return;
}

Harl::~Harl(void) {
  return;
}

void Harl::complain(std::string level) {
  std::string logLevel[5] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  void (Harl::*f[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
                              &Harl::error, &Harl::invalid};
  size_t option;

  for (option = 0; option < 5; option++) {
    if (!logLevel[option].compare(level)) {
      break;
    }
  }

  switch (option) {
    case 0:
      (this->*f[0])();
      std::cout << std::endl;
      __attribute__((fallthrough));
    case 1:
      (this->*f[1])();
      std::cout << std::endl;
      __attribute__((fallthrough));
    case 2:
      (this->*f[2])();
      std::cout << std::endl;
      __attribute__((fallthrough));
    case 3:
      (this->*f[3])();
      break;
    default:
      (this->*f[4])();
      break;
  }
}

void Harl::debug(void) {
  std::cout << "[ DEBUG ]" << std::endl;
  std::cout << "I love having extra bacon for my";
  std::cout << " 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
  std::cout << "I really do!" << std::endl;
}

void Harl::info(void) {
  std::cout << "[ INFO ]" << std::endl;
  std::cout << "I cannot believe adding extra bacon costs more money.";
  std::cout << " You didn't put enough bacon in my burger! ";
  std::cout << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void) {
  std::cout << "[ WARNING ]" << std::endl;
  std::cout << "I think I deserve to have some extra bacon for free.";
  std::cout << " I've been coming for years whereas you started ";
  std::cout << "working here since last month." << std::endl;
}

void Harl::error(void) {
  std::cout << "[ ERROR ]" << std::endl;
  std::cout << "This is unacceptable!";
  std::cout << " I want to speak to the manager now." << std::endl;
}

void Harl::invalid(void) {
  std::cout << "[ Probably complaining about insignificant problems ]"
            << std::endl;
}
