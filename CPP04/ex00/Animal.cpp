/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:21:11 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/25 12:48:43 by malsabah         ###   ########.fr       */
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

void Animal::makeSound() const
{
	std::cout << "Some generic animal sound" << std::endl;
}
