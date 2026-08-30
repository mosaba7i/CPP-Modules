/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 16:13:59 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/25 16:14:02 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    const int size = 5;
    Zombie *horde = zombieHorde(size, "Horde Zombie");
    int i;

    if (!horde)
    {
        std::cerr << "Failed to create zombie horde." << std::endl;
        return 1;
    }
    i = 0;
    while (i < size)
    {
        horde[i].announce();
        i++;
    }
    delete[] horde;
    return 0;
}
