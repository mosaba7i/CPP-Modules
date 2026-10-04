/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:25 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/30 17:53:22 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
	Animal * animals[4];
	for (int index = 0; index < 2; ++index)
		animals[index] = new Dog();
	for (int index = 2; index < 4; ++index)
		animals[index] = new Cat();
	animals[0]->makeSound();
	animals[2]->makeSound();
	for (int index = 0; index < 4; ++index)
		delete animals[index];
	Dog *original = new Dog();
	original->getBrain()->ideas[0] = "original idea";
	Dog copy(*original);
	
	std::cout << copy.getBrain()->ideas[0] << std::endl;
	return 0;
}
