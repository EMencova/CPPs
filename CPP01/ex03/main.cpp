/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:15:36 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 20:40:42 by eliskam          ###   ########.fr       */
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
		HumanB Luke("Luke ");
		Luke.setWeapon(fight);
		Luke.attack();
		fight.setType("revolver.");
		Luke.attack();
	}
	return (0);		
}