/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:28:33 by emencova          #+#    #+#             */
/*   Updated: 2024/12/26 09:21:31 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::string ft_trim(const std::string &s)
{
    int one = s.find_first_not_of(' ');
    if (std::string::npos == one)
        return (s);
    int last = s.find_last_not_of(' ');
    return (s.substr(one, (last - one + 1)));  
}

