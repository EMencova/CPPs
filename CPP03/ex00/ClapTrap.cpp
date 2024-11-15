/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:01:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/15 23:12:53 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<< "Constructor has been called."<<std::endl;
    _name = "default";
    _energy_points = 10;
    _hit_points = 10;
    _attack_damage = 0;
}


ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _energy_points = 10;
    _hit_points = 10;
    _attack_damage = 0;
    std::cout<< "ClapTrap"<<_name<<" created."<<std::endl;  
}


ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout<< "Copy constructor has been called."<< std::endl;
    *this = original;
}


ClapTrap &ClapTrap::operator=(ClapTrap const &original)
{
    std::cout<<"Copy assignment constructor has been called."<<std::endl;
    if (this != &original)
    {
        _name = original._name;
        _hit_points = original._hit_points;
		_energy_points = original._energy_points;
		_attack_damage = original._attack_damage;
    }
    return (*this);
    
}

const std::string &ClapTrap::GetName() const
{
    return (_name);
}

const unsigned int &ClapTrap::GetHitPoints() const
{
    return (_hit_points);
}

const unsigned int &ClapTrap::GetEnergyPoints() const
{
    return (_energy_points);
}

const int &ClapTrap::GetAttackDamage() const
{
    return (_attack_damage);
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destructor has been called."<<std::endl;
};


void ClapTrap::attack(const std::string& target)
{
    if (this->_hit_points <= 0 || !this->_energy_points)
        std::cout<<_name<<" cannot attack."<<std::endl;
    else
    {  
        std::cout<<"ClapTrap "<<_name<<" attacks "<<target<<" causing "<<_hit_points<<" points of damage."<< std::endl;
        _energy_points--;
    }
    std::cout<<"energy points are "<< GetEnergyPoints()<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (!this->_hit_points)
        std::cout<<_name<< " cannot take damage."<<std::endl;
    else if(amount > _hit_points)
    {
        _hit_points = 0;
        std::cout<<_name<< " died with "<<_hit_points<<"."<<std::endl;
    }
    else 
    {
        _hit_points -= amount;
        std::cout<<"ClapTrap "<<_name<<" takes a damage of "<<amount<<" points."<<std::endl;
        
    }
    std::cout<<"hit points are "<< _hit_points<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!this->_energy_points || _hit_points <= 0)
        std::cout<<_name<<" cannot be repaired he is DEAD!"<<std::endl;
    else 
    {
        _energy_points--;
        _hit_points += amount;
        std::cout<<"ClapTrap "<<_name<<" repaired itself to "<<_hit_points<<"."<<std::endl;
    }
    std::cout<<"energy points are "<< GetEnergyPoints()<<std::endl;
}

