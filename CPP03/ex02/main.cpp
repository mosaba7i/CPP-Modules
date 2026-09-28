/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 22:59:25 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/16 05:30:17 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "--- ScavTrap creation order ---" << std::endl;
    ScavTrap scav("Serena");
    scav.attack("a target");
    scav.guardGate();

    std::cout << "\n--- FragTrap creation order ---" << std::endl;
    FragTrap frag("Fraggy");
    frag.attack("a target");
    frag.highFivesGuys();
    frag.takeDamage(25);
    frag.beRepaired(5);

    std::cout << "\n--- Destruction order proof ---" << std::endl;
    return 0;
}
