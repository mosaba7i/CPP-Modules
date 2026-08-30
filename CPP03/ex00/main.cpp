/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 01:31:41 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/16 06:22:59 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ClapTrap.hpp"

int main()
{
    std::cout << "--- ClapTrap basic test ---" << std::endl;
    ClapTrap robot("CL4P-TP");

    robot.attack("a bandit");
    robot.takeDamage(4);
    robot.beRepaired(2);
    robot.takeDamage(20);
    robot.attack("another bandit");
    robot.beRepaired(5);

    std::cout << "--- Copy test ---" << std::endl;
    ClapTrap copy(robot);
    copy.attack("a target");

    std::cout << "\n--- Destruction order proof ---" << std::endl;
    return 0;
}
