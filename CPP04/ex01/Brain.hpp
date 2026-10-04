/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 07:22:07 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/27 07:22:08 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
class Brain
{
public:
	std::string ideas[100];
	Brain();
	Brain(Brain const & other);
	Brain & operator=(Brain const & other);
	~Brain();
};
#endif
