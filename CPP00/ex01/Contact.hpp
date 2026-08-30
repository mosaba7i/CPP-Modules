/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 15:06:31 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/15 09:27:38 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
public:
    Contact();

    void changeFirstName(const std::string& firstName);
    void changeLastName(const std::string& lastName);
    void changeNickname(const std::string& nickname);
    void changePhoneNumber(const std::string& phoneNumber);
    void changeDarkestSecret(const std::string& darkestSecret);

    const std::string& getFirstName() const;
    const std::string& getLastName() const;
    const std::string& getNickname() const;
    const std::string& getPhoneNumber() const;
    const std::string& getDarkestSecret() const;

private:
    std::string first_Name;
    std::string last_Name;
    std::string nick_name;
    std::string phone_Number;
    std::string darkest_Secret;
};

#endif
