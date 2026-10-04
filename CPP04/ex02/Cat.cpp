/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:49 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/25 14:35:31 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(Cat const & other) : Animal(other)
{
	std::cout << "Cat copy constructor" << std::endl;
}

Cat & Cat::operator=(Cat const & other)
{
	if (this != &other)
		Animal::operator=(other);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
