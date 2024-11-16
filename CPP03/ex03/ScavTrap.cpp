/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:11 by emencova          #+#    #+#             */
/*   Updated: 2024/11/15 23:09:25 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout<<"ScavTrap"<<_name<<" default constructor called!"<<std::endl; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _name = name;
    _energy_points = 50;
    _hit_points = 100;
    _attack_damage = 20;
    std::cout<< "ScavTrap "<<_name<<" created."<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap()
{
    std::cout<< "ScavTrap "<<_name<<" copy constructor has been called."<< std::endl;
    *this = original;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &original)
{
    std::cout<<"ScavTrap "<<_name<<" copy assignment constructor has been called."<<std::endl;
    if (this != &original)
    {
        _name = original._name;
        _hit_points = original._hit_points;
		_energy_points = original._energy_points;
		_attack_damage = original._attack_damage;
    }
    return (*this);   
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap "<<_name<<" destructor called!"<<std::endl; 
}

void ScavTrap::attack(const std::string& target)
{
    std::cout<<"ScavTrap "<<_name<<" attacks "<<target<< " with "<<_attack_damage<<" of attack damage."<<std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout<<"Scavtrap "<<_name<<" entered protected mode."<<std::endl;
    
}