/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:11 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 13:13:09 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout<<"ScavTrap default constructor called!"<<std::endl; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _energy_points = 50;
    _hit_points = 100;
    _attack_damage = 20;
    std::cout<< "ScavTrap "<<_name<<" created."<<std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap()
{
    std::cout<< "ScavTrap copy constructor has been called."<< std::endl;
    *this = original;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &original)
{
    if (this != &original)
    {
        _name = original._name;
        _hit_points = original._hit_points;
		_energy_points = original._energy_points;
		_attack_damage = original._attack_damage;
    }
    std::cout<<"ScavTrap copy assignment constructor has been called."<<std::endl;
    return (*this);   
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap"<<_name<<" destructor called!"<<std::endl; 
}

void ScavTrap::attack(const std::string& target)
{
    std::cout<<"ScavTrap "<<_name<<" attacks "<<target<< " with "<<_attack_damage<<" of attack damage."<<std::endl;
}

void ScavTrap::guardGate() const
{
    std::cout<<"Scavtrap "<<_name<<" entered protected mode."<<std::endl;
    
}