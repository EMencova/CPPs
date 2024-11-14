/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:01:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/14 12:37:23 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout<< "Constructor has been called."<<std::endl;
    _name = name;
}


ClapTrap::ClapTrap(const ClapTrap &original)
{
    std::cout<< "Copy constructor has been called."<< std::endl;
    *this = original;
}


ClapTrap &operator=(Fixed const &original)
{
    std::cout<<"Copy assignment constructor has been called."<<std::endl;
    if (this != &original)
    {
        _name = original._name;
        hit_points = original.hit_points;
		energy_points = original.energy_points;
		attack_damage = original.attack_damage;
    }
    return (*this);
    
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destructor has been called."<<std::endl;
};


ClapTrap::attack(const std::string& target)
{
    target = new name;
    
    std::cout<<"ClapTrap "<<name<<" attacks "<<target<<" causing "<<amount<<" points iof damage."<< std::endl;
    
    
}


ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"ClapTrap "<<name<<" takes a damage of "<<amount<<" points."<<std::endl;
}



ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<<"ClapTrap "<<name<<" repaired itself of "<<amount<<"."<<std::endl;
}
    