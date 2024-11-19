/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:06:56 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 22:04:33 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

    Cat::Cat() : Animal()
    {
        std::cout<<"Cat default constructor called."<<std::endl;
        type = "Cat";
    }

    
    Cat::Cat(const Cat &original) : Animal()
    {
        std::cout<<"Cat copy constructor called."<<std::endl;
        *this = original;
    }

    Cat &Cat::operator=(const Cat &original)
    {
        std::cout<<"Cat copy assignment constructor called."<<std::endl;
        if (this != &original)
        {
            type = original.type;
        }
        
        return (*this);
    }

    Cat::~Cat()
    {
        std::cout<<"Cat destructor called."<<std::endl;
    }

    void Cat::makeSound() const
    {
        std::cout<<"Meow"<<std::endl;
    }