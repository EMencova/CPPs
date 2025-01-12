/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:28:33 by emencova          #+#    #+#             */
/*   Updated: 2025/01/12 09:09:13 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	testInput(std::ifstream & file, char **av)
{
	std::string				str(av[1]);
	std::string     		line;
	std::ifstream	test_line;
	
	file.open(av[1], std::ifstream::in);
	if (!file.is_open())
		throw std::runtime_error("Error: Could not open file: " + str);	
	test_line.open(av[1], std::ifstream::in);
	while (getline(test_line, line))
		if (line.empty())
			throw std::runtime_error("Error: Empty line in input file.");
}

int	main(int ac, char **av)
{
	std::ifstream		file;
	BitcoinExchange *	exchange;

    if (ac != 2)
    {
		std::cout<<"Error: wrong arguments."<<std::endl;
        return (1);
    }
	try
    {
		testInput(file, av);
		exchange = new BitcoinExchange(file, av);
	}
	catch (const std::exception & e)
    {
		std::cout << e.what() << std::endl;
		return (1);
	}

	delete exchange;
	return (0);
}
