/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 05:17:38 by malsabah          #+#    #+#             */
/*   Updated: 2026/07/29 05:17:40 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie();
    ~Zombie();
    void setName(std::string name);
    void announce(void) const;
};

Zombie *zombieHorde(int N, std::string name);

#endif
