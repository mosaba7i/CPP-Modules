/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 01:31:41 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/16 02:49:20 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string  name;
    unsigned int hit_points;
    unsigned int energy_points;
    unsigned int attack_damage;

public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    virtual ~ClapTrap();

    virtual void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
