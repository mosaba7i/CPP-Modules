/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:41 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/27 07:22:42 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(Animal const & other) : type(other.type)
{
	std::cout << "Animal copy constructor" << std::endl;
}

Animal & Animal::operator=(Animal const & other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

std::string const & Animal::getType() const
{
	return type;
}
