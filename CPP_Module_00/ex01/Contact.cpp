/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 04:09:38 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 06:07:58 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName(void) {
	return (this->_firstName);
}

std::string Contact::getLastName(void) {
	return (this->_lastName);
}

std::string Contact::getNickName(void) {
	return (this->_nickName);
}

std::string Contact::getPhoneNumber(void) {
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) {
	return (this->_darkestSecret);
}

void Contact::setFirstName(std::string firstName) {
	this->_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	this->_nickName = nickName;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
}
