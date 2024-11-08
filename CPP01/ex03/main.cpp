/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:36 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 20:18:03 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		Weapon fight= Weapon("knife.");
		HumanA Fernando("Fernando ", fight);
		Fernando.attack();
		fight.setType("gun.");
		Fernando.attack();
	}
	{
		Weapon fight = Weapon("crude spiked club.");
		Weapon	fight2 = Weapon("sword.");
		HumanB Luke("Luke");
		Luke.setWeapon(&fight);
		Luke.attack();
		fight.setType("revolver.");
		Luke.attack();
		Luke.setWeapon(&fight2);
		Luke.attack();
	}
	{
		Weapon fight = Weapon("ax.");
		HumanB ted("Ted");
		ted.setWeapon(NULL);
		ted.attack();
		fight.setType("ax.");
		ted.attack();
	}
	return (0);		
}