/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:11 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/27 07:22:12 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat() : Animal(), brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Cat const & other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copy constructor" << std::endl;
}
Cat & Cat::operator=(Cat const & other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain * Cat::getBrain()
{
	return brain;
}

Brain const * Cat::getBrain() const
{
	return brain;
}
