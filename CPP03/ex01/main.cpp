/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:00:43 by emencova          #+#    #+#             */
/*   Updated: 2024/11/15 20:44:32 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clap("blabla1");
	ScavTrap scav("bleble2");
    ClapTrap *clap_2 = new ClapTrap("lala3");

	clap.attack("bleble2");
    
	scav.takeDamage(scav.GetAttackDamage());
	scav.beRepaired(18);
	scav.guardGate();
    scav.attack("blabla1");
    clap.takeDamage(scav.GetAttackDamage());
    clap.beRepaired(20);
    scav.attack("lala3");
	clap_2->takeDamage(scav.GetAttackDamage());
    clap_2->beRepaired(10);
    clap_2->attack("blabla1");
    clap.takeDamage(clap_2->GetAttackDamage());
    delete clap_2;
	return (0);
}
