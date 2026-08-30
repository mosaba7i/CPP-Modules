/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:19:25 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/25 16:19:29 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "String address: " << &brain << std::endl;
    std::cout << "Pointer address: " << stringPTR << std::endl;
    std::cout << "Reference address: " << &stringREF << std::endl;
    std::cout << std::endl;
    std::cout << "String value: " << brain << std::endl;
    std::cout << "Pointer value: " << *stringPTR << std::endl;
    std::cout << "Reference value: " << stringREF << std::endl;
    return 0;
}
