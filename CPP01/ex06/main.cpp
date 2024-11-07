/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:16:37 by emencova          #+#    #+#             */
/*   Updated: 2024/11/07 12:16:40 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main (int ac, char **av)
{
    Harl harl;
    int level = -1;
    if (ac != 2)
    {
        std::cout << "Wrong amount of arguments, need two." << std::endl;
        return(1);
    }

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
        if (av[1] == levels[i])
        {
            level = i;
            break;
        }

    switch (level + 1)
    {
        case 1:
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 2:
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 3:
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case 4:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Nothing significant, so he has finally shut up." << std::endl;
            break;
    }
    return (0);
}