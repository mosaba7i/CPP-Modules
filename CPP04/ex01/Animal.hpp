/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:00 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/30 16:54:07 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal
{
protected: std::string type;
public:
	Animal();
	Animal(Animal const & other);
	Animal & operator=(Animal const & other);
	virtual ~Animal();
	std::string const & getType() const;
	virtual void makeSound() const;
};
#endif
