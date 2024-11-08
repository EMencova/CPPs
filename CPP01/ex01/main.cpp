/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:31:24 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 19:22:53 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 4;
	int L = 5;
	Zombie *horde = zombieHorde(N, "Brainy");
	Zombie *blabla = zombieHorde(L, "BLABLA");
	for (int i = 0; i < N; ++i)
        horde[i].announce();
	for (int i = 0; i < L; ++i)
        blabla[i].announce();
	delete []horde;
	delete []blabla;
	return (0);
}
