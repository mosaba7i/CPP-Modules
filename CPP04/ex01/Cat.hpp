/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:14 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/30 18:45:07 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
	Brain * brain;
public:
	Cat();
	Cat(Cat const & other);
	Cat & operator=(Cat const & other);
	~Cat();
	void makeSound() const;
	Brain * getBrain();
	Brain const * getBrain() const;
};
#endif
