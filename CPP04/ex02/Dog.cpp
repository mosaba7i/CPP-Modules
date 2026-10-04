/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:56 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/25 14:35:31 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog const & other) : Animal(other)
{
	std::cout << "Dog copy constructor" << std::endl;
}

Dog & Dog::operator=(Dog const & other)
{
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
