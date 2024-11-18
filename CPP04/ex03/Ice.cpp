/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:25:52 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 21:46:53 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/Ice.hpp"

 Ice::Ice() : AMateira("ice")
 {
    std::cout<<"Ice default constructor called."<<std::endl;
 }

 
Ice::Ice(const Ice &original) : AMateira();
{
    std::cout<<"Ice copy constructor called."<<std::endl;
    *this = original;
}

Ice::Ice &operator=(const Ice &original)
{
    std::cout<<"Ice copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        _type = original._type;
    }
    return(*this);
    
}

Ice::~Ice() : AMateira()
{
    std::cout<<"Ice destructor called."<<std::endl;
}


Amateria* Ice::clone() const
{
    return (new Ice);
}


void Ice::use(int idx, ICharacter& target)
{
    std::cout<<"* shoots an ice bolt at "<<target.getName()<<" *"<<std::endl; 
}

       