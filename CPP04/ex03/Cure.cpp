/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:43:25 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 11:49:59 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout<<"Cure default constructor called."<<std::endl;
}


Cure::Cure(const Cure &original) : AMateria()
{
    *this =  original;
    std::cout<<"Cure copy constructor called."<<std::endl;
}


Cure &Cure::operator=(const Cure &original)
{
    std::cout<<"Cure copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        _type = original._type;
    }
    return (*this);
}

 Cure::~Cure()
 {
    std::cout<<"Cure destructor called."<<std::endl;
 }


AMateria* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout<<" * heals "<<target.getName()<<"’s wounds *"<<std::endl;
    
}