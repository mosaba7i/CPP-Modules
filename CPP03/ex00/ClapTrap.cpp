/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 01:31:41 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/16 00:39:23 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        name = other.name;
        hit_points = other.hit_points;
        energy_points = other.energy_points;
        attack_damage = other.attack_damage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (hit_points == 0 || energy_points == 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack " << target
                  << " because it has no hit points or energy left!" << std::endl;
        return;
    }
    --energy_points;
    std::cout << "ClapTrap " << name << " attacks " << target
              << ", causing " << attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount >= hit_points)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! Hit points left: " << hit_points << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points == 0 || energy_points == 0)
    {
        std::cout << "ClapTrap " << name
                  << " cannot repair itself because it has no hit points or energy left!"
                  << std::endl;
        return;
    }
    --energy_points;
    hit_points += amount;
    std::cout << "ClapTrap " << name << " repairs itself for " << amount
              << " hit points! Current hit points: " << hit_points << std::endl;
}
