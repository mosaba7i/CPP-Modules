/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malsabah <malsabah@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 03:11:37 by malsabah          #+#    #+#             */
/*   Updated: 2026/08/05 18:53:22 by malsabah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
    int                 raw_value;
    static const int    fractional_bits = 8;

public:
    Fixed(void);
    Fixed(const Fixed &other);
    Fixed &operator=(const Fixed &other);
    ~Fixed(void);

    int  getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
