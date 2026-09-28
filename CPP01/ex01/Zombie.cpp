/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 05:17:15 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/29 05:17:16 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name("Unnamed")
{
}

Zombie::~Zombie()
{
    std::cout << name << ": destroyed." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}

void Zombie::announce(void) const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
