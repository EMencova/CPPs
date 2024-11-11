/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIxed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:55:32 by emencova          #+#    #+#             */
/*   Updated: 2024/11/11 17:39:14 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _value = 0;
    _bits = 8;
}

Fixed::Fixed(int value,static const int bits):_value(value), _bits(bits)
{
    _value = 0;
    _bits = 8;
}

Fixed::Fixed(int value): _value(value), _bits(8){}

Fixed::Fixed(const Fixed& original)//: _value(original._value), _bits(original._bits)
{
    *this = original;
}

Fixed &operator=(Fixed const &rhs)
{
    if (this != &other)
    {
        _value = rhs._value;
        _bits = other._bits;
    }
    return (*this);
}

Fixed::~Fixed();

