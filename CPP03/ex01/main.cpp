/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 01:31:41 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/16 06:22:46 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"

int main()
{
    std::cout << "--- ScavTrap creation order ---" << std::endl;
    ScavTrap robot("Serena");

    std::cout << "--- ScavTrap behavior test ---" << std::endl;
    robot.attack("an intruder");
    robot.takeDamage(30);
    robot.beRepaired(10);
    robot.guardGate();

    std::cout << "--- Copy test ---" << std::endl;
    ScavTrap copy(robot);
    copy.attack("another intruder");
    
    std::cout << "\n--- Destruction order proof ---" << std::endl;
    return 0;
}

