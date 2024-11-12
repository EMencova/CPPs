/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:55:32 by emencova          #+#    #+#             */
/*   Updated: 2024/11/12 09:24:49 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<< "Default constructor called."<<std::endl;
    _raw = 0;
}

Fixed::Fixed(const Fixed& original)
{
    std::cout<<"Copy constructor has been called."<<std::endl;
    *this = original;
}

Fixed &Fixed::operator=(Fixed const &original)
{
    std::cout<<"Copy assignment operator has been called."<<std::endl;
    if (this != &original)
        _raw = original._raw;
    _raw = original.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout<<"Destructor has been called."<<std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout<<"Get raw bits has been called."<<std::endl;
    return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
    std::cout<<"Set raw bits has been called."<<std::endl;
    _raw = raw;
}

