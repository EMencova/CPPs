/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 19:54:10 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout<<"WrongCat default constructor called."<<std::endl;
}

WrongCat::WrongCat(const WrongCat &original) : WrongAnimal(original)
{
    std::cout<<"WrongCat copy constructor called."<<std::endl;
    *this = original;
}

WrongCat &WrongCat::operator=(const WrongCat &original)
{
    std::cout<<"WrongCat copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        type = original.type;
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructor called."<<std::endl;
}

void WrongCat::makeSound() const
{
    std::cout<<"WrongCat - Meow"<<std::endl;
}

