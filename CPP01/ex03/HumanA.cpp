/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:47:19 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/25 17:47:21 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name), weapon(weapon)
{
}

void HumanA::attack(void) const
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
