/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:00:43 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 12:19:29 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("blabla1");
	ClapTrap b("bleble2");

    a.attack("bleble2");
    b.takeDamage(5);
    b.beRepaired(10);
    b.attack("blabla1");
	a.takeDamage(5);
	a.beRepaired(10);
	b.attack("blabla1");
    a.attack("bleble2");
    b.takeDamage(5);
    b.beRepaired(10);
    b.attack("blabla1");
	a.takeDamage(5);
	a.beRepaired(10);
	b.attack("blabla1");
    a.attack("bleble2");
    b.takeDamage(5);
    b.beRepaired(10);
    b.attack("blabla1");
	a.takeDamage(5);
	a.beRepaired(10);
	b.attack("blabla1");
    a.attack("bleble2");
    b.takeDamage(5);
    b.beRepaired(10);
    b.attack("blabla1");
	a.takeDamage(5);
	a.beRepaired(10);
	b.attack("blabla1");
    b.attack("blabla1");
    a.attack("bleble2");
    b.takeDamage(5);
    b.beRepaired(10);
    b.attack("blabla1");
	a.takeDamage(5);
	a.beRepaired(10);
	b.attack("blabla1");
}