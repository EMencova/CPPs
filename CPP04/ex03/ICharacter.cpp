/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:08:31 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 10:47:14 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/ICharacter.hpp"

ICharacter::Character()
{
    std::cout<<"Character default constructor called."<<std::endl;
    _name = "Undefined";
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
}


ICharacter::Character(std::string name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
    std::cout<<_name<<" character created."<<std::endl;    
}

ICharacter::Character(const Character &original)
{
    std::cout<<"Character copy constructor called."<<std::endl;
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
    *this = original;  
}

ICharacter &Character::operator=(const Character &original)
{
    std::cout<<"Character copy assignment constructor called."<<std::endl;
    if(this != &original)
    {
        for(int i = 0; i < 4; i++)
            inv[i] = original.inv[i];
    }
    return (*this);
}

ICharacter::~Character()
{
    std::cout<<"Character destructor called."<<std::endl;
    
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
            delete inv[i];
    }
}

std::string const &Character::getName() const
{
    return(_name);
}

void    Character::equip(AMateira *m)
{
    for (int i = 0; i < 4; i++)
    {
        if(inv[i] == m)
        {
            std::cout<<_name<<" is already equipped."<<std::endl;
            return;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (inv[i] = NULL)
        {
            inv[i] = m;
            return;
        }
    }
    std::cout<<"Inventory is full, cannot equip."<<std::endl; 
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
    {
        if(inv[idx])
        {
            std::cout<<inv[i]->getType()<<" is unequipped."<<std::endl;
            inv[idx] = NULL;
        }
        else
            std::cout<<"Nothing to equip here."<<std::endl;   
    }
}

void Character::use(int idx, ICharacter& target)
{ 
	if (idx >=0 && idx < 4 && inv[idx] != NULL)
		inv[idx]->use(target);
}
