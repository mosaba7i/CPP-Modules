/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:18:26 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/05 07:49:39 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    Fixed c(10);
    Fixed d(2.5f);
    Fixed e(3.0f);
    Fixed f(c);
    Fixed g;

    g = d;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;

    std::cout << "c.getRawBits() = " << c.getRawBits() << std::endl;
    c.setRawBits(42);
    std::cout << "c after setRawBits(42) = " << c << std::endl;

    std::cout << "c.toInt() = " << c.toInt() << std::endl;
    std::cout << "d.toFloat() = " << d.toFloat() << std::endl;

    std::cout << "c > d : " << (c > d) << std::endl;
    std::cout << "c < d : " << (c < d) << std::endl;
    std::cout << "c >= d : " << (c >= d) << std::endl;
    std::cout << "c <= d : " << (c <= d) << std::endl;
    std::cout << "c == d : " << (c == d) << std::endl;
    std::cout << "c != d : " << (c != d) << std::endl;

    std::cout << "c + d = " << (c + d) << std::endl;
    std::cout << "c - d = " << (c - d) << std::endl;
    std::cout << "c * d = " << (c * d) << std::endl;
    std::cout << "c / d = " << (c / d) << std::endl;

    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a now = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a now = " << a << std::endl;

    std::cout << "--a = " << --a << std::endl;
    std::cout << "a now = " << a << std::endl;
    std::cout << "a-- = " << a-- << std::endl;
    std::cout << "a now = " << a << std::endl;

    std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
    std::cout << "min(const a, const b) = " << Fixed::min((Fixed const &) a, (Fixed const &) b) << std::endl;
    std::cout << "max(const a, const b) = " << Fixed::max((Fixed const &) a, (Fixed const &) b) << std::endl;

    return 0;
}

