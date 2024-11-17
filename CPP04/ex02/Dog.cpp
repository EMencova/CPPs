/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:07:20 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 22:03:15 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

 Dog::Dog() : AAnimal()
 {
    std::cout<<"Dog default constructor called."<<std::endl;
    _brain = new Brain;
    type = "Dog";
 }

Dog::Dog(const Dog &original) : AAnimal()
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
        _brain = new Brain(*original._brain);
    }

    return (*this);
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called."<<std::endl;
    delete _brain;
}

void Dog::makeSound() const
{
    std::cout<<"woof"<<std::endl;
}