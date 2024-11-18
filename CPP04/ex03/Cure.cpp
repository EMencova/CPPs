/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:43:25 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 15:45:51 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure() : AMateira()
{}

Cure(const Cure &original) : AMateira()
{
    *this =  original;
}


Cure &operator=(const Cure &original)
{
    if (this != &original)
    {
        _type = original._type;
    }
    return (*this);
}

 ~Cure(){}
 

void Cure::setType()
{
    _type = "cure";
}

Cure* clone() const
{
    return (new Cure._type);
}

void use(int idx, ICharacter& target)
{
    std::cout<<" * heals "<<_type<<"’s wounds *"<<std::endl;
    
}