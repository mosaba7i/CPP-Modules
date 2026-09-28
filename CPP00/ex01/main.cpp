/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 12:20:52 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/15 09:42:25 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
void printBMO()
{
    const std::string pad = "          ";

    std::cout << "\n";
    std::cout << "======================================================" << std::endl;
    std::cout << pad << "                                                    " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⢰⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⣶⡆⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⢸⣿⡟⠛⠛⠛⠛⠛⠛⠛⠛⠛⠛⢻⣿⡇⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠰⠆⠀⠀⠀⠀⠰⠆⠀⢸⣿⡇⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⠀⠶⠶⠀⠀⠀⠀⢸⣿⡇⠀⠀⠀⢰⣶⠄                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⢸⣿⣧⣀⣀⣀⣀⣀⣀⣀⣀⣀⣀⣼⣿⡇⠀⠀⢀⣿⡿⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⢀⣠⣴⣶⣾⣿⡿⠿⠿⠿⠿⠿⠿⣿⣿⡿⠿⣿⣿⣷⣶⣾⡿⠟⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⣠⣿⡿⠋⠉⢹⣿⣿⣶⠶⣶⣶⣶⣶⣿⣿⣿⣾⣿⣿⡏⠉⠁⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⢠⣿⡟⠀⠀⠀⢸⣿⡟⠉⠀⠉⣻⣿⣿⣏⣀⣻⣿⣉⣿⡇⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠉⠁⠀⠀⠀⢸⣿⣿⣿⣤⣿⣿⣿⣿⣿⡟⠋⠙⢿⣿⡇⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⢸⣿⣏⣉⣉⣿⣏⣉⣹⣿⣧⣀⣀⣾⣿⡇⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⠸⠿⠿⠿⣿⡿⠿⠿⠿⠿⢿⣿⠿⠿⠿⠇⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠀⠀⠀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                " << std::endl;
    std::cout << pad << "                                                    " << std::endl;
    std::cout << "\n";
    std::cout << "======================================================" << std::endl;
    std::cout << "              42 PHONEBOOK TERMINAL" << std::endl;
    std::cout << "======================================================" << std::endl;
    std::cout << "  [ADD]     Add a new contact" << std::endl;
    std::cout << "  [SEARCH]  Display saved contacts" << std::endl;
    std::cout << "  [EXIT]    Close PhoneBook" << std::endl;
    std::cout << "======================================================" << std::endl;
}
int main() {
    PhoneBook phoneBook;
    std::string command;
    printBMO();
    while (true) {
        std::cout << "Enter command > ";
        std::getline(std::cin, command);
        if(std::cin.eof())
             exit(0);
        if (command == "ADD") {
            phoneBook.add_contact();
        } else if (command == "SEARCH") {
            phoneBook.search_Contacts();
        } else if (command == "EXIT") {
            break;
        }
    }
    return 0;
}
