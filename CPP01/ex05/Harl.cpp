/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 00:25:47 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/29 05:05:45 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
              << "pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn't put enough bacon in my burger! If you did, "
              << "I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I've been coming for years, whereas you started working "
              << "here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now."
              << std::endl;
}

void Harl::complain(std::string level)
{
    const std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*actions[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    int i;

    i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
        {
            (this->*actions[i])();
            return;
        }
        i++;
    }
    std::cerr << "Unknown complaint level: " << level << std::endl;
}
