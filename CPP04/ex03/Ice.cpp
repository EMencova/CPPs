/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:25:52 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 16:11:08 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

 Ice() : AMateira()
 {}

 
Ice(const Ice &original) : AMateira();
{
    *this = original;
}

Ice &operator=(const Ice &original)
{
    if (this != &original)
    {
        _type = original._type;
    }
    
}

~Ice() : AMateira()
{}

Ice::void setType()
{
    _type = "ice";
}

Cure* clone() const
{
    return (new Ice._type);
}

std::string const &getName() const
{
    return (ICharacter._type);
    
}

void use(int idx, ICharacter& target)
{
    std::cout<<"* shoots an ice bolt at "<<_type<<" *"<<std::endl;
    
}

       