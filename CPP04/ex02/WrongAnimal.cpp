/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 20:13:46 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal default constructor called."<<std::endl;
}
/*
WrongAnimal::WrongAnimal(std::string newtype)
{
    type = newtype;
    std::cout<<"Animal type = "<<type<<" created."<<std::endl;
}*/


WrongAnimal::WrongAnimal(const WrongAnimal &original)
{
   *this = original;
   std::cout<<"WrongAnimal copy constructor created."<<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &original)
{
    std::cout<<"WrongAnimal copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        type = original.type;
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal destructor called."<<std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}

void WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal sound."<<std::endl;
}