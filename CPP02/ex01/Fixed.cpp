/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:17:59 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/05 18:53:22 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : raw_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : raw_value(value << fractional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
    : raw_value(static_cast<int>(roundf(value * (1 << fractional_bits))))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        raw_value = other.getRawBits();
    return *this;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return raw_value;
}

void Fixed::setRawBits(int const raw)
{
    raw_value = raw;
}

float Fixed::toFloat(void) const
{
    return static_cast<float>(raw_value) / (1 << fractional_bits);
}

int Fixed::toInt(void) const
{
    return raw_value >> fractional_bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return out;
}
