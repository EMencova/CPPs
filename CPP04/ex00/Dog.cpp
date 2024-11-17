/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:07:20 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 13:25:48 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.cpp"

 Dog::Dog()
 {
    std::cout<<"Dog default constructor called."<<std::endl;
 }

Dog::Dog(const Dog &original)
{
    std::cout<<"Dog copy constructor called."<<std::endl;
    *this = original;
    
}

Dog &Dog::operator=(const Dog &original)
{
    std::cout<<"Dog copy assignment constructor called."<<std::endl;
    if (this != &operator)

    return (*this);
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called."<<std::endl;   
}




void setType();
void getType();
void makeSound();