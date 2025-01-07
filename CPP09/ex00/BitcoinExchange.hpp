/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:29:00 by emencova          #+#    #+#             */
/*   Updated: 2025/01/07 21:28:58 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <map>
# include <iostream>
# include <fstream>
# include <string>
# include <sstream>


class BitcoinExchange
{
    private:
        std::map<std::string, float>form;
        int _size;
        int *_input;

        void get_info(std::ifstream &file);
        int  getSize(std::ifstream &file) const;
        void parsing(std::ifstream &file);
        bool check_date(std::ifstream &file);
        
        

    public:
        BitcoinExchange();
        BitcoinExchange(std::ifstream &file, char **av);
        BitcoinExchange(const BitcoinExchange &original);
        BitcoinExchange &operator=(const BitcoinExchange &original);
        ~BitcoinExchange();

        



};

std::string ft_trim(const std::string &s);