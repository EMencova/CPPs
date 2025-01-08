/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:29:00 by emencova          #+#    #+#             */
/*   Updated: 2025/01/08 21:15:31 by eliskam          ###   ########.fr       */
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
        int *_checks;

        void get_info(std::ifstream &file);
        int  getSize(std::ifstream &file) const;
        void parsing(std::ifstream &file);
        bool check_date(std::string line);
        bool check_pos(std::string line);
        bool check_size(std::string line);
        void printout(std::ifstream &file);
        void closest_date(std::string str);
        
    public:
        BitcoinExchange();
        BitcoinExchange(std::ifstream &file, char **av);
        BitcoinExchange(const BitcoinExchange &original);
        BitcoinExchange &operator=(const BitcoinExchange &original);
        ~BitcoinExchange();
};
