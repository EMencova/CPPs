/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:29:03 by emencova          #+#    #+#             */
/*   Updated: 2025/01/07 21:29:35 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){};

BitcoinExchange::BitcoinExchange(std::ifstream &file, char **av)
{
    std::ifstream data;
    data.open("data.csv", std::ifstream::in);
    get_info(data);
    _size = getSize(data) - 1;
    _input = new int[_size];
    for (int i = 0; i < _size; i++)
        _input[i] = 0;
    
    file.open(av[1], std::ifstream::in);
    parsing(file);
    
    
    

    
    
    
         
}


BitcoinExchange::BitcoinExchange(const BitcoinExchange &original)
{
    form = original.form;
    _size = original._size;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &original)
{
    if (this != &original)
    {
        form = original.form;
        _size = original._size;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::get_info(std::ifstream &file)
{
    if(!file.is_open())
    {
        std::cerr<<"Could not open the file."<<std::endl;
    }
    std::string line = "";
    while(getline(file, line))
    {
        std::istringstream str(line);
        std::string key;
        float value;
        if(std::getline(str,key, ','))
        {
            if (str>>value)
                form.insert(std::pair<std::string, float>(key, value));
        }
    }
    file.close();  
}

int  BitcoinExchange::getSize(std::ifstream &file) const
{
    int len;
    std::string line ="";
    while(getline(file, line))
        len++;
    file.close();
    return (len);
}

void BitcoinExchange::parsing(std::ifstream &file)
{
    std::string line;
    int i = 0;

    getline(file, line);
    while(getline(file,line))
    {
        _input[i] = 0;
        if (check_date == false)
            _input[i] = 1;
    }
    
}

bool BitcoinExchange::check_date(std::ifstream &file)
{
    
}



