/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:03:14 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 18:05:24 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *new_zombie;

    std::cout << "What is the Zombie name? ";
    std::string zombie_name;
    std::cin >> zombie_name;
    std::cout << "What is the RandomChump name? ";
    std::string chump_name;
    std::cin >> chump_name;
    
    new_zombie = newZombie(zombie_name);
    randomChump(chump_name);
    delete new_zombie;
    return (0);
}


