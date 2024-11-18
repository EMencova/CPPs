/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:43:25 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 21:44:11 by eliskam          ###   ########.fr       */
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


Cure &operator=(const Cure &original)
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

void Cure::use(int idx, ICharacter& target)
{
    std::cout<<" * heals "<<target.getName()<<"’s wounds *"<<std::endl;
    
}