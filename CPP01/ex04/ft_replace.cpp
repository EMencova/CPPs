/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:15:45 by emencova          #+#    #+#             */
/*   Updated: 2024/11/07 12:15:51 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Loser.hpp"

Loser::Loser(std::string file): input(file), output(file + ".replace"){}

Loser::~Loser(){};

void Loser::replace(std::string str1, std::string str2)
{
    if (str1 == str2)
    {
        std::cerr<< "Error: same string" << std::endl;
        exit(EXIT_FAILURE);
    }

    std::ifstream infile(input.c_str());
    if (infile.is_open())
    {
        std::ofstream outFile(output.c_str());
        std::string read_line;

        while (std::getline(infile, read_line))
        {
            size_t place = read_line.find(str1, 0);
            while (place != std::string::npos)
            {
                read_line.erase(place, str1.length());
                read_line.insert(place, str2);
                place = read_line.find(str1, 0);
            }
            outFile << read_line << std::endl;
        }
        infile.close();
        outFile.close();
    }
    else
    {
        std::cerr << "Error; cannot open file." << std::endl;
        exit(EXIT_FAILURE);
    }
}

