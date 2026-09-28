/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:18:18 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/06 15:59:12 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : raw_value(0) {}

Fixed::Fixed(const int value) : raw_value(value << fractional_bits) {}

Fixed::Fixed(const float value)
    : raw_value(static_cast<int>(roundf(value * (1 << fractional_bits)))) {}

Fixed::Fixed(const Fixed &other) : raw_value(other.raw_value) {}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        raw_value = other.raw_value;
    return *this;
}

Fixed::~Fixed(void) {}

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

bool Fixed::operator>(const Fixed &other) const { return raw_value > other.raw_value; }
bool Fixed::operator<(const Fixed &other) const { return raw_value < other.raw_value; }
bool Fixed::operator>=(const Fixed &other) const { return raw_value >= other.raw_value; }
bool Fixed::operator<=(const Fixed &other) const { return raw_value <= other.raw_value; }
bool Fixed::operator==(const Fixed &other) const { return raw_value == other.raw_value; }
bool Fixed::operator!=(const Fixed &other) const { return raw_value != other.raw_value; }

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed res;
    res.raw_value = raw_value + other.raw_value;
    return res;
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed res;
    res.raw_value = raw_value - other.raw_value;
    return res;
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed res;
    long mul_res = static_cast<long>(raw_value) * other.raw_value;
    res.raw_value = static_cast<int>(mul_res >> fractional_bits);
    return res;
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed res;
    long upper_num = static_cast<long>(raw_value) << fractional_bits;
    res.raw_value = static_cast<int>(upper_num / other.raw_value);
    return res;
}

Fixed &Fixed::operator++(void)
{
    ++raw_value;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed old(*this);
    ++raw_value;
    return old;
}

Fixed &Fixed::operator--(void)
{
    --raw_value;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed old(*this);
    --raw_value;
    return old;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
    return (first < second) ? first : second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second)
{
    return (first < second) ? first : second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
    return (first > second) ? first : second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second)
{
    return (first > second) ? first : second;
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
    out << value.toFloat();
    return out;
}
