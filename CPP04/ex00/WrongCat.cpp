/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:21:49 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/27 07:21:50 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat const & other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong cat sound" << std::endl;
}
