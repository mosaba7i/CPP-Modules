/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:22 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/30 18:45:08 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal
{
	Brain * brain;
public:
	Dog();
	Dog(Dog const & other);
	Dog & operator=(Dog const & other);
	~Dog();
	void makeSound() const;
	Brain * getBrain();
	Brain const * getBrain() const;
};
#endif
