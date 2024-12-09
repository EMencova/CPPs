/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 21:23:56 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    
    if (ac != 2)
    {
        std::cout<<"Wrong amount of arguments!"<<std::endl;
        return (0);
    }
    else
       ScalarConverter::convert(av[1]);
    return (0);
}