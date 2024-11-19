/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:07:20 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 22:04:18 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

 Dog::Dog() : Animal()
 {
    std::cout<<"Dog default constructor called."<<std::endl;
    type = "Dog";
 }

Dog::Dog(const Dog &original) : Animal()
{
    std::cout<<"Dog copy constructor called."<<std::endl;
    *this = original;
    
}

Dog &Dog::operator=(const Dog &original)
{
    std::cout<<"Dog copy assignment constructor called."<<std::endl;
    
    if (this != &original)
    {
        type = original.type;
    }

    return (*this);
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called."<<std::endl;   
}

void Dog::makeSound() const
{
    std::cout<<"woof"<<std::endl;
}