/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:04 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/27 07:22:05 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(Brain const & other)
{
	*this = other;
	std::cout << "Brain copy constructor" << std::endl;
}
Brain & Brain::operator=(Brain const & other)
{
	if (this != &other)
		for (int index = 0; index < 100; ++index)
			ideas[index] = other.ideas[index];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}
