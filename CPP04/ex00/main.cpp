/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:21:35 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/25 12:48:33 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal * animal = new Animal();
	Animal * dog = new Dog();
	Animal * cat = new Cat();
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	delete animal;
	delete dog;
	delete cat;

	WrongAnimal * wrong_cat = new WrongCat();
	wrong_cat->makeSound();
	delete wrong_cat;

	Dog dog_copy;
	Dog dog_assigned;
	dog_assigned = dog_copy;
	Cat cat_copy;
	cat_copy.makeSound();
	(void)dog_assigned;
	return 0;
}
