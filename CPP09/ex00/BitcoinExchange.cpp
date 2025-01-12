/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:29:03 by emencova          #+#    #+#             */
/*   Updated: 2025/01/12 09:07:45 by eliskam          ###   ########.fr       */
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
   _checks = new int[_size];
    for (int i = 0; i < _size; i++)
        _checks[i] = 0; 
    file.open(av[1], std::ifstream::in);
    parsing(file);
    file.open(av[1], std::ifstream::in);
	printout(file);  
}



BitcoinExchange::BitcoinExchange(const BitcoinExchange &original)
{
    form = original.form;
    _size = original._size;
    _checks = original._checks;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &original)
{
    if (this != &original)
    {
        form = original.form;
        _size = original._size;
        _checks = original._checks;
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

    if (getline(file, line)) 
    {
        while (getline(file, line))
        {
            _checks[i] = 0;
            if (!check_date(line))
                _checks[i] = 1;
            i++;
        }
    }
    file.close();
}

std::string ft_trim(const std::string &s)
{
    size_t start = s.find_first_not_of(" \t\r\n");
    size_t end = s.find_last_not_of(" \t\r\n");

    if (start == std::string::npos || end == std::string::npos)
        return "";
    
    return s.substr(start, end - start + 1);
}

bool BitcoinExchange::check_date(std::string date)
{
    if (date.length() != 10 || date[4] != '-' || date[7] != '-')
        return false;

    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);
    if (atoi(year.c_str()) < 2009 || atoi(month.c_str()) > 12 || atoi(day.c_str()) > 31)
        return (false);

    int day_int = atoi(day.c_str());
    int month_int = atoi(month.c_str());
    if (day_int < 1 || day_int > 31 || month_int < 1 || month_int > 12)
        return (false);

    return (true);
}


void BitcoinExchange::printout(std::ifstream &file)
{
    std::string line;
    int i = 0;

    while (getline(file, line))
    {
        if (i == 0)
        {
            i++;
            continue;
        }
        if (line.empty())
            continue;
        size_t separator_pos = line.find('|');
        if (separator_pos == std::string::npos)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        std::string key = ft_trim(line.substr(0, separator_pos));
        std::string value = ft_trim(line.substr(separator_pos + 1));
        if (key.empty() || value.empty())
        {
            std::cout << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (!check_date(key))
        {
            std::cout << "Error: bad input => " << key << std::endl;
            continue;
        }
        double valueNum = atof(value.c_str());
        if (valueNum < 0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            continue;
        }
        if (valueNum > 2147483647)
        {
            std::cout << "Error: too large a number." << std::endl;
            continue;
        }

        float rate = 0;
        if (!closest_date(key, rate))
        {
            std::cout << "Error: closest date not found for => " << key << std::endl;
            continue;
        }
        std::cout << key << " => " << value << " = " << valueNum * rate << std::endl;
    }
}

int ft_stoi(const std::string &str)
{
    int result = 0;
    bool negative = false;
    size_t i = 0;

    if (str[i] == '-')
    {
        negative = true;
        ++i;
    }

    for (; i < str.length(); ++i)
    {
        char c = str[i];
        if (c < '0' || c > '9') 
            throw std::invalid_argument("Invalid character in number");
        result = result * 10 + (c - '0');
    }

    return negative ? -result : result;
}

bool BitcoinExchange::closest_date(std::string &str, float &rate)
{
    int error = 0;
    int year, month, day;

    try
    {
        year = ft_stoi(str.substr(0, 4));
        month = ft_stoi(str.substr(5, 2));
        day = ft_stoi(str.substr(8, 2));
    }
    catch (const std::exception &e)
    {
        error = 1;
    }

    if (error || month < 1 || month > 12 || day < 1 || day > 31 || year < 2009)
        return (false);
    std::map<std::string, float>::iterator it = form.lower_bound(str);
    if (it == form.end() || it->first != str)
    {
        if (it == form.begin())
            return false;
        --it;
    }
    rate = it->second;
    return (true);
}