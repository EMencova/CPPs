/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:11 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 13:12:55 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout<< "FragTrap "<<_name<<" constructor called."<<std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    _energy_points = 100;
    _hit_points = 100;
    _attack_damage = 30;
    std::cout<< "FragTrap "<<_name<<" created."<<std::endl;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap()
{
    std::cout<<"FragTrap "<<_name<<" copy constructor has been created."<<std::endl;
    *this = original;
}

FragTrap &FragTrap::operator=(const FragTrap &original)
{
    if (this != &original)
    {
        _name = original._name;
        _energy_points = original._energy_points;
        _hit_points = original._hit_points;
        _attack_damage = original._attack_damage;
    }
    std::cout<<"FragTrap "<<_name<<" copy assignment has been called!"<<std::endl;
    return (*this);   
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap "<<_name<<" destructor has been called!"<<std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout<<"HighFive function called, funny -- haha"<<std::endl;
}


