/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:18:22 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/05 18:53:22 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
    int                 raw_value;
    static const int    fractional_bits = 8;

public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed(void);

    int   getRawBits(void) const;
    void  setRawBits(int const raw);
    float toFloat(void) const;
    int   toInt(void) const;

    bool operator>(const Fixed &other) const;
    bool operator<(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;

    Fixed operator+(const Fixed &other) const;
    Fixed operator-(const Fixed &other) const;
    Fixed operator*(const Fixed &other) const;
    Fixed operator/(const Fixed &other) const;

    Fixed &operator++(void);
    Fixed operator++(int);
    Fixed &operator--(void);
    Fixed operator--(int);

    static Fixed &min(Fixed &first, Fixed &second);
    static const Fixed &min(const Fixed &first, const Fixed &second);
    static Fixed &max(Fixed &first, Fixed &second);
    static const Fixed &max(const Fixed &first, const Fixed &second);
};

std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
