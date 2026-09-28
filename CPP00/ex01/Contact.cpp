/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:06:40 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/15 09:27:38 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

Contact::Contact() {}

void Contact::changeFirstName(const std::string& firstName) {
    first_Name = firstName;
}

void Contact::changeLastName(const std::string& lastName) {
    last_Name = lastName;
}

void Contact::changeNickname(const std::string& nickname) {
    nick_name = nickname;
}

void Contact::changePhoneNumber(const std::string& phoneNumber) {
    phone_Number = phoneNumber;
}

void Contact::changeDarkestSecret(const std::string& darkestSecret) {
    darkest_Secret = darkestSecret;
}

const std::string& Contact::getFirstName() const {
    return first_Name;
}



const std::string& Contact::getLastName() const {
    return last_Name;
}

const std::string& Contact::getNickname() const {
    return nick_name;
}

const std::string& Contact::getPhoneNumber() const {
    return phone_Number;
}

const std::string& Contact::getDarkestSecret() const {
    return darkest_Secret;
}
