/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 15:17:45 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/25 15:28:08 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *heapZombie;

    randomChump("Stack Zombie");
    heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie;
    return 0;
}
