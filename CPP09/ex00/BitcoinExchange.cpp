/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:29:03 by emencova          #+#    #+#             */
/*   Updated: 2025/01/08 21:20:44 by eliskam          ###   ########.fr       */
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

    getline(file, line);
    while(getline(file,line))
    {
        _checks[i] = 0;
        if (!check_date)
            _checks[i] = 1;
        if(!check_pos)
            _checks[i] = 2;
        if(!check_size)
            _checks[i] = 3;
        i++;
    }
    file.close();
}

std::string ft_trim(const std::string &str)
{
    int one = str.find_first_not_of(' ');
    if (std::string::npos == one)
        return (str);
    int last = str.find_last_not_of(' ');
    return (str.substr(one, (last - one + 1)));  
}

bool BitcoinExchange::check_date(std::string line)
{
    std::istringstream str(line);
    std::string date_check;
    

    getline(str,date_check,'|');
    date_check = ft_trim(date_check);
    
    std::string year = date_check.substr(0, 4);
    std::string month = date_check.substr(5, 2);
    std::string day = date_check.substr(8, 2);

    if (std::stoi(year) > 2023 || std::stoi(month) > 12 || std::stoi(day) > 31)
        return (false);
    else
        return (true);   
}

bool BitcoinExchange::check_pos(std::string line)
{
    std::istringstream str(line);
    std::string pos_check;
    size_t find_sign;
    
    getline(str,pos_check,'|');
    getline(str,pos_check,'|');
    find_sign = pos_check.find("-");
    if (find_sign != std::string::npos && pos_check.find("-", find_sign + 1) != std::string::npos)
        return (false);
    float value = atof(pos_check.c_str());
    return (value > 0);   
}

bool BitcoinExchange::check_size(std::string line)
{
    std::istringstream str(line);
    std::string pos_check;
    
    getline(str, pos_check, '|');
    getline(str, pos_check, '|');

    float value = atof(pos_check.c_str());
    return (value < static_cast<float>(__INT_MAX__));
}

void BitcoinExchange::printout(std::ifstream &file)
{
    std::string line;
    std::string key;
    std::string value;
    int i = 0;
    while(i < _size)
    {
        getline(file, line);
        std::istringstream str(line);
        getline(str,key,'|');
        getline(str,value,'|');
        key = ft_trim(key);
        value = ft_trim(value);
        if (_checks[i] == 0)
        {
            if (form[key] == 0)
            {
                while (form[key] == 0 && key != "Error: Year too old.")
                    closest_date(key);
            }
        }
        
        
    }   
}


void BitcoinExchange::closest_date(std::string str)
{
    int year, month, day;
    std::istringstream(str.substr(0, 10)) >> year >> month >> day;

    if (--day < 1)
    {
        day = 31;
        if (--month < 1)
        {
            month = 12;
            if (--year < 2010)
            {
                str = "Error: Year too old.";
                return;
            }
        }
    }
    std::string yearStr = std::to_string(year);
    std::string monthStr = (month < 10 ? "0" : "") + std::to_string(month);
    std::string dayStr = (day < 10 ? "0" : "") + std::to_string(day);

    str = yearStr + "-" + monthStr + "-" + dayStr;
}


