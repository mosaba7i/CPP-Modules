/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:47:41 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/25 17:47:44 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
private:
    std::string name;
    Weapon *weapon;

public:
    HumanB(std::string name);
    void setWeapon(Weapon &weapon);
    void attack(void) const;
};

#endif
