/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:33:21 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 17:12:17 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) 
{
    Zombie *zombieHorde;
    int i;

    zombieHorde = new Zombie[N];
    
    for (i = 0; i < N; i++) 
    {
        zombieHorde[i].set_name(name);
        //zombieHorde[i].announce();
    }
    return (zombieHorde);
}

