/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:23:00 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/30 18:45:08 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const & other);
	Dog & operator=(Dog const & other);
	~Dog();
	void makeSound() const;
};
#endif
