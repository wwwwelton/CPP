// Copyright (c) 2022 Welton Leite, wleite. All rights reserved.

#include "Account.hpp"

#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
  this->_accountIndex = getNbAccounts();
  this->_amount = (initial_deposit > 0) ? initial_deposit : 0;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:"
            << this->_accountIndex
            << ";amount:"
            << checkAmount()
            << ";created"
            << std::endl;
}

Account::Account(void) {
  this->_accountIndex = getNbAccounts();
  this->_amount = 0;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  _nbAccounts++;
  _displayTimestamp();
  std::cout << "index:"
            << this->_accountIndex
            << ";amount:"
            << checkAmount()
            << ";created"
            << std::endl;
}

Account::~Account(void) {
  _displayTimestamp();
  std::cout << "index:"
            << this->_accountIndex
            << ";amount:"
            << checkAmount()
            << ";closed"
            << std::endl;
}

int Account::getNbAccounts(void) {
  return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
  return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
  return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
  return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) {
  _displayTimestamp();
  std::cout << "accounts:"
            << getNbAccounts()
            << ";total:"
            << getTotalAmount()
            << ";deposits:"
            << getNbDeposits()
            << ";withdrawals:"
            << getNbWithdrawals()
            << std::endl;
}

void Account::makeDeposit(int deposit) {
  this->_amount += deposit;
  _totalAmount += deposit;
  this->_nbDeposits++;
  _totalNbDeposits++;
  _displayTimestamp();
  std::cout << "index:"
            << this->_accountIndex
            << ";p_amount:"
            << checkAmount() - deposit
            << ";deposit:"
            << deposit
            << ";amount:"
            << checkAmount()
            << ";nb_deposits:"
            << this->_nbDeposits
            << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
  if (checkAmount() - withdrawal < 0) {
    _displayTimestamp();
    std::cout << "index:"
              << this->_accountIndex
              << ";p_amount:"
              << checkAmount()
              << ";withdrawal:refused"
              << std::endl;
    return (false);
  }
  this->_amount -= withdrawal;
  _totalAmount -= withdrawal;
  this->_nbWithdrawals++;
  _totalNbWithdrawals++;
  _displayTimestamp();
  std::cout << "index:"
            << this->_accountIndex
            << ";p_amount:"
            << checkAmount() + withdrawal
            << ";withdrawal:"
            << withdrawal
            << ";amount:"
            << checkAmount()
            << ";nb_withdrawals:"
            << this->_nbWithdrawals
            << std::endl;
  return (true);
}

int Account::checkAmount(void) const {
  return (this->_amount);
}

void Account::displayStatus(void) const {
  _displayTimestamp();
  std::cout << "index:"
            << this->_accountIndex
            << ";amount:"
            << checkAmount()
            << ";deposits:"
            << this->_nbDeposits
            << ";withdrawals:"
            << this->_nbWithdrawals
            << std::endl;
}

void Account::_displayTimestamp(void) {
  time_t rawtime;
  struct tm *timeinfo;
  char buffer[16];

  time(&rawtime);
  timeinfo = localtime(&rawtime);
  strftime(buffer, 16, "%Y%m%d_%I%M%S", timeinfo);
  std::cout << "[" << buffer << "] ";
//   std::cout << "[19920104_091532] ";
}
