/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:31:24 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 12:19:33 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde = zombieHorde(4, "Brainy");
	Zombie *blabla = zombieHorde(5, "BLABLA");
	delete []horde;
	delete []blabla;
	return (0);
}
