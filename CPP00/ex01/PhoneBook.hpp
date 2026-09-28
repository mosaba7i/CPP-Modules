/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:02:09 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/15 09:42:25 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
public:
    PhoneBook();

    void add_contact();
    void search_Contacts() const;

private:
    Contact contacts[8];
    int nums_of_contacts;
    int oldest_index;

    std::string trunc_Field(const std::string& field) const;
    void show_Contact_Line(int index) const;
    void show_Contact_Details(int index) const;
};

#endif