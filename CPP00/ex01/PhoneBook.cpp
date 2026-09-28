/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:01:59 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/30 21:47:17 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include <cctype> // For std::isspace
#include <iomanip> // For std::setw, std::right
#include <iostream> // For std::cout, std::cin, std::getline
#include <string> // For std::string substring, 
#include <cstdlib>

std::string prompt_and_read(const std::string& prompt) {
    std::string value;
    while (true) {
         if(std::cin.eof())
             exit(0);
        std::cout << prompt;
        std::getline(std::cin, value);
        if (!std::cin) {
            return "";
        }
       
        if (!value.empty()) {
            return value;
        }
        std::cout << "field shouldn't be empty" << std::endl;
    }
}

bool check_phone_num(const std::string& number) {
    if (number.empty())
        return false;
    for (long unsigned int i = 0; i < number.size(); ++i) 
        if (!(number[i] >= '0' && number[i] <= '9'))
            return false;
    return true;
}

std::string read_phone_num() {
    std::string value;
    
    while (true) {
        if(std::cin.eof())
             exit(0);
        std::cout << "Phone number: ";
        std::getline(std::cin, value);
        if (!std::cin) {
            return "";
        }
         
        if (value.empty()) {
            std::cout << "field shouldn't be empty" << std::endl;
            continue;
        }
        if (check_phone_num(value)) {
            return value;
        }
        std::cout << "not valid!!, please write a valid phone number" << std::endl;
    }
}

bool check_index(const std::string& input, int& value) {
    if (input.empty())
        return false;
    value = 0;
    for (long unsigned int i = 0; i < input.size(); ++i) {
        char c = input[i];
         if (!(c >= '0' && c <= '9'))
            return false;
         if(c >= '0' && c <= '9')
            value = value * 10 + (c - '0');
    }
    if (value > 8 || value < 1)
        return false;
    return true;
}

PhoneBook::PhoneBook() : nums_of_contacts(0), oldest_index(0) {}

void PhoneBook::add_contact() {
    Contact newContact;
    int index;

    newContact.changeFirstName(prompt_and_read("First name: "));
    newContact.changeLastName(prompt_and_read("Last name: "));
    newContact.changeNickname(prompt_and_read("Nickname: "));
    std::string phoneNumber = read_phone_num();
    newContact.changePhoneNumber(phoneNumber);
    newContact.changeDarkestSecret(prompt_and_read("Darkest secret: "));
    if (nums_of_contacts < 8) {
        index = nums_of_contacts;
        ++nums_of_contacts;
    } else {
        index = oldest_index;
        oldest_index = (oldest_index + 1) % 8;
    }
    contacts[index] = newContact;
}

void PhoneBook::search_Contacts() const {
    if (nums_of_contacts == 0) {
        std::cout << "Phonebook is empty." << std::endl;
        return;
    }

    std::cout << std::setw(10) << std::right << "index" << "|";
    std::cout << std::setw(10) << std::right << "first name" << "|";
    std::cout << std::setw(10) << std::right << "last name" << "|";
    std::cout << std::setw(10) << std::right << "nickname" << std::endl;

    for (int i = 0; i < nums_of_contacts; ++i)
        show_Contact_Line(i);

    std::string input;
    std::cout << "Enter index: ";
    std::getline(std::cin, input);
     if(std::cin.eof())
             exit(0);
    int index = -1;
    if (!check_index(input, index) || index > nums_of_contacts) {
        std::cout << "invalid index!!" << std::endl;
        return;
    }
    show_Contact_Details(index - 1);
}

std::string PhoneBook::trunc_Field(const std::string& field) const {
    if (field.size() > 10) {
        return field.substr(0, 9) + ".";
    }
    return field;
}

void PhoneBook::show_Contact_Line(int index) const {
    std::cout << std::setw(10) << std::right << index + 1 << "|";
    std::cout << std::setw(10) << std::right << trunc_Field(contacts[index].getFirstName()) << "|";
    std::cout << std::setw(10) << std::right << trunc_Field(contacts[index].getLastName()) << "|";
    std::cout << std::setw(10) << std::right << trunc_Field(contacts[index].getNickname()) << std::endl;
}

void PhoneBook::show_Contact_Details(int index) const {
    std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
    std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
}
