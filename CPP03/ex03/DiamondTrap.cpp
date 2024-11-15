/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:01:33 by emencova          #+#    #+#             */
/*   Updated: 2024/11/15 23:29:22 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap()
{
    std::cout<<"DiamondTrap constructor called."<<std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
    _name = ClapTrap::_name;
    _hit_points = FragTrap::_hit_points;
    _energy_points = ScavTrap::_energy_points;
    _attack_damage = FragTrap::_attack_damage;
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
    std::cout<<"I am DiamondTrap "<<_name<<" and I come from ClapTrap named-"<< ClapTrap::_name<<std::endl;
}