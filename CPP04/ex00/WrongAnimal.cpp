/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 13:27:41 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal default constructor called."<<std::endl;
}

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