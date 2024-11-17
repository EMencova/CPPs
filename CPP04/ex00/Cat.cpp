/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:06:56 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 13:21:52 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.cpp"

    Cat::Cat()
    {
        std::cout<<" Cat default constructor called."<<std::endl;
    }

    
    Cat::Cat(const Cat &original)
    {
        std::cout<<"Cat copy constructor called."<<std::endl;
        *this = original;
    }

    Cat &Cat::operator=(const Cat &original)
    {
        std::cout<<"Cat copy assignment constructor called."<<std::endl;
        if (this != &original)
        
        return (*this);
    }

    Cat::~Cat()
    {
        std::cout<<"Cat destructore called."<<std::endl;
    }


    void setType();
    void getType();
    void makeSound();