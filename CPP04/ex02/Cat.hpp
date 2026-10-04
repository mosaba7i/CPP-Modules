/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:52 by malsabah          #+#    #+#             */
/*   Updated: 2026/09/30 18:45:08 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
class Cat : public Animal
{
public:
	Cat();
	Cat(Cat const & other);
	Cat & operator=(Cat const & other);
	~Cat();
	void makeSound() const;
};
#endif
