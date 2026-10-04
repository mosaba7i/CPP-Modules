/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:18 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/27 07:22:19 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
Dog::Dog() : Animal(), brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(Dog const & other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copy constructor" << std::endl;
}
Dog & Dog::operator=(Dog const & other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain * Dog::getBrain()
{
	return brain;
}

Brain const * Dog::getBrain() const
{
	return brain;
}
