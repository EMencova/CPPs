/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:00:43 by emencova          #+#    #+#             */
/*   Updated: 2024/11/15 20:53:46 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int	main(void)
{
	ClapTrap clap("blabla1");
    ClapTrap *clap_2 = new ClapTrap("bleble2");
    FragTrap frag("hihi1");
    
	clap.attack("hihi1");
	frag.takeDamage(frag.GetAttackDamage());
	frag.beRepaired(80);
    clap_2->attack("blabla1");
    clap.takeDamage(clap.GetAttackDamage());
    clap.beRepaired(20);
    frag.attack("bleble2");
	clap_2->takeDamage(clap.GetAttackDamage());
    clap_2->beRepaired(10);
    clap_2->attack("blabla1");
    clap.takeDamage(clap_2->GetAttackDamage());
    frag.attack("blabla1");
    clap.takeDamage(clap.GetAttackDamage());
    clap.beRepaired(20);;
    delete clap_2;
	return (0);
}

/*
int	main(void)
{
	ClapTrap clap("blabla1");
	ScavTrap scav("lala1");
    ClapTrap *clap_2 = new ClapTrap("bleble2");
    FragTrap frag("hihi1");
    
	clap.attack("lala1");
	scav.takeDamage(scav.GetAttackDamage());
	scav.beRepaired(18);
	scav.guardGate();
    scav.attack("blabla1");
    clap.takeDamage(scav.GetAttackDamage());
    clap.beRepaired(20);
    scav.attack("bleble2");
	clap_2->takeDamage(scav.GetAttackDamage());
    clap_2->beRepaired(10);
    clap_2->attack("blabla1");
    clap.takeDamage(clap_2->GetAttackDamage());
    frag.attack("lala1");
    scav.takeDamage(scav.GetAttackDamage());
    scav.beRepaired(20);
    clap_2->attack("lala1");
    frag.takeDamage(frag.GetAttackDamage());
    frag.beRepaired(30);
    delete clap_2;
	return (0);
}

*/