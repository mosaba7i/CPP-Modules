/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:39:51 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/25 17:39:54 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

const std::string &Weapon::getType(void) const
{
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
