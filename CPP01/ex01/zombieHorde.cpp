/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 05:17:31 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/29 05:17:33 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde;
    int i;

    if (N <= 0)
        return 0;
    horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return horde;
}
