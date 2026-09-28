/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 17:47:26 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/27 17:23:00 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
private:
    std::string name;
    Weapon &weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    void attack(void) const;
};

#endif
