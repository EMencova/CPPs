/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/10 21:52:10 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data():_value(42)
{
    std::cout<<"Data constructor called."<<std::endl;
}

Data::~Data()
{
    std::cout<<"Data destructor called."<<std::endl;
}

Data::Data(const Data &original)
{
    std::cout<<"Data copy constructor called."<<std::endl;
    *this = original;
}

Data &Data::operator=(const Data &original)
{
    std::cout<<"Data copy assignment constructor called."<<std::endl;
    if(this != &original)
    {
        _value = original._value;
    }
    return(*this);
}

int Data::getValue() const
{
    return(_value);
}

std::ostream &operator<<(std::ostream &out, Data const &original)
{
    out << original.getValue();
    return (out);
}