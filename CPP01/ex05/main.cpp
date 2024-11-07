/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:16:20 by emencova          #+#    #+#             */
/*   Updated: 2024/11/07 12:16:23 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong amount of arguments, need two." << std::endl;
        return(1);
    }

    Harl harl;
    harl.complain(av[1]);
    return (0);
}