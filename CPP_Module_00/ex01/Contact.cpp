/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wleite <wleite@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 04:09:38 by wleite            #+#    #+#             */
/*   Updated: 2022/03/03 04:16:52 by wleite           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::GetFirstName(void) {
	return (this->firstName);
}

std::string Contact::GetLastName(void) {
	return (this->lastName);
}

std::string Contact::GetNickName(void) {
	return (this->nickName);
}

std::string Contact::GetPhoneNumber(void) {
	return (this->phoneNumber);
}

std::string Contact::GetDarkestSecret(void) {
	return (this->darkestSecret);
}

void Contact::SetFirstName(std::string firstName) {
	this->firstName = firstName;
}

void Contact::SetLastName(std::string lastName) {
	this->lastName = lastName;
}

void Contact::SetNickName(std::string nickName) {
	this->nickName = nickName;
}

void Contact::SetPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void Contact::SetDarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}
