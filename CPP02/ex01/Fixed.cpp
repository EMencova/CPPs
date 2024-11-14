/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:55:32 by emencova          #+#    #+#             */
/*   Updated: 2024/11/14 11:27:01 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<< "Default constructor has been called."<<std::endl;
    _raw = 0;
}

Fixed::Fixed(const int raw)
{
    std::cout<< "INT constructor has been called."<<std::endl;
    _raw = raw * (1 << Fixed::_bits);
}

Fixed::Fixed(const float raw)
{
    //std::cout<< "FLOAT constructor has been called."<<std::endl;
    _raw = roundf(raw * (float)(1 << Fixed::_bits));
    //std::cout<< _raw <<std::endl;
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
  //  std::cout<<"Get raw bits has been called."<<std::endl;
    return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
    std::cout<<"Set raw bits has been called."<<std::endl;
    _raw = raw;
}

float Fixed::toFloat(void)const
{
    int abs = std::abs(_raw);
    int sign = 1;
    if (_raw < 0)
        sign = -1;
    float f = (float)abs /(1 << Fixed::_bits);
    return (f * sign);
    
}

int Fixed::toInt(void)const
{
    return(_raw >> Fixed::_bits);   
}


std::ostream& operator<<(std::ostream& out, const Fixed& right)
{
    out << right.toFloat();
    return out;
}


