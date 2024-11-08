/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:16:01 by emencova          #+#    #+#             */
/*   Updated: 2024/11/08 20:22:36 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Loser.hpp"

int main (int ac, char **av)
{
    if (ac != 4 || !av[1][0] || !av[2][0])
    {
        std::cout << "Provide correct arguments!"<< std::endl;
        return (1);
    }
    Loser loser (av[1]);
    loser.replace(av[2], av[3]);
    return (0);
}