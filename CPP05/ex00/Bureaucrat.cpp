/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:29 by emencova          #+#    #+#             */
/*   Updated: 2024/11/20 16:20:33 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("Unknown"), _grade(150);
{
    std::cout<<"Bureaucrat default constructor called."<<std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &original)
{

    std::cout<<"Bureaucrat copy constructor called."<<std::endl;
    *this = original;
}

Bureaucrat &operator=(const Bureaucrat &original)
{
    std::cout<<"Bureaucrat copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        name = original.name;
        _grade = original._grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout<<"Bureaucrat destructor called."<<std::endl;
}

std::string Bureaucrat::getName()
{
    return (name);
}

int Bureaucrat::getGrade()
{
    return (_grade);
}

void increment()
{
    
    
}
void decrement()
{
    
}

