/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:06:34 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 13:30:06 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal()
{
    std::cout<<"AAnimal default constructor called."<<std::endl;
}

AAnimal::AAnimal(const AAnimal &original)
{
   *this = original;
   std::cout<<"AAnimal copy constructor created."<<std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &original)
{
    std::cout<<"AAnimal copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        type = original.type;
    }
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout<<"AAnimal destructor called."<<std::endl;
}

std::string AAnimal::getType() const
{
    return (type);
}

void AAnimal::makeSound() const
{
    std::cout<<"AAnimal sound"<<std::endl;
}