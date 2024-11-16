/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:01:33 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 14:48:27 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout<<"DiamondTrap constructor called."<<std::endl;
    
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap() ,FragTrap(), ScavTrap()
{
    FragTrap frag(name);
    
    _name = name;
    _attack_damage = frag.GetAttackDamage();
    _hit_points = frag.GetHitPoints(); 
    std::cout<<"DiamondTrap "<<_name<<" constructor called."<<std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &original) : ClapTrap(), FragTrap(), ScavTrap()
{
    *this = original;
    std::cout<<"DiamondTrap "<<_name<<" copy constructor called."<<std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &original)
{
    if (this != &original)
    {
        _name = original._name;
        _attack_damage = original._attack_damage;
        _energy_points = original._energy_points;
        _hit_points = original._hit_points;
    }
    std::cout<<"DiamondTrap "<<_name<<" copy assignment constructor called."<<std::endl;
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DiamondTrap "<<_name<<" destructor called."<<std::endl;
}


void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
    std::cout<<"DiamondTrap "<<_name<<" attacks "<<target<<"."<<std::endl;
}

void DiamondTrap::whoAmI() const
{
    std::cout<<"I am DiamondTrap "<<_name<<" and I come from ClapTrap named - "<< ClapTrap::_name<<std::endl;
}