/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:06:34 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 23:03:40 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
    std::cout<<"Animal default constructor called."<<std::endl;
    type = "NotDefined";
}

Animal::Animal(const Animal &original)
{
   *this = original;
   std::cout<<"Animal copy constructor created."<<std::endl;
}

Animal &Animal::operator=(const Animal &original)
{
    std::cout<<"Animal copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        type = original.type;
    }
    return (*this);
}

Animal::~Animal()
{
    std::cout<<"Animal destructor called."<<std::endl;
}

std::string Animal::getType() const
{
    return (type);
}

void Animal::makeSound() const
{
    std::cout<<"Animal sound"<<std::endl;
}