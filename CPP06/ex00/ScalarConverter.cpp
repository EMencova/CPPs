/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/11 21:38:53 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &original)
{ 
    *this = original;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &original)
{
    (void)original;
    return(*this); 
}
ScalarConverter::~ScalarConverter(){}


void ScalarConverter::checkChar(std::string input)
{
    int nbr = atoi(input.c_str());
    if (nbr <= 0 || nbr >= 127 )
        throw ScalarConverter::Impossible();
}

        
void ScalarConverter::checkRangeInt(std::string input)
{
    long long nbr = atol(input.c_str());
    if (nbr < INT_MIN || nbr > INT_MAX)
        throw ScalarConverter::Impossible();
}

int ScalarConverter::checkRangeFloat(std::string input)
{
    long double nbr = strtof(input.c_str(), NULL);

    if (nbr < -std::numeric_limits<float>::max() || nbr > std::numeric_limits<float>::max())
    {
        std::cout<<"Float: impossible"<<std::endl;
        return (0);
    }
    else
    {
        std::cout<<"Float: "<<std::fixed<<std::setprecision(2)<<static_cast<float>(nbr)<<"f"<<std::endl;
        return(1);
    }
}

void ScalarConverter::checkRangeDouble(std::string input)
{
    long double nbr = std::strtod(input.c_str(), NULL);

    if (nbr < -DBL_MAX || nbr > DBL_MAX)
        std::cout<<"Double: impossible"<<std::endl;
    else
        std::cout<<"Double: "<<std::fixed<<std::setprecision(2)<<static_cast<double>(nbr)<<std::endl;
}

void ScalarConverter::convertChar(std::string input)
{
    int nbr = static_cast<int>(input[0]);
    int n = atoi(input.c_str());
    if (input.length() == 1 && !std::isdigit(input[0]))
        std::cout<<"Char: "<<input[0]<<std::endl;
    else
    {
        std::cout<<"Char: "<<n<<std::endl;
    }
    std::cout<<"Int: "<<nbr<<std::endl;
    std::cout<<"Float: "<<std::fixed<<std::setprecision(2)<<static_cast<float>(nbr)<<"f"<<std::endl;
    std::cout<<"Double: "<<std::fixed<<std::setprecision(2)<<static_cast<double>(nbr)<<std::endl;
}

void ScalarConverter::convertInt(std::string input)
{
    long long nbr = atol(input.c_str());
    try
    {
        checkChar(input);
        std::cout<<"Char: "<<static_cast<char>(nbr)<<std::endl;
        
    }
    catch (const ScalarConverter::Impossible &e)
    {
        std::cout << "Char: " << e.what() << std::endl;
    }
    if(nbr < INT_MIN || nbr > INT_MAX)
    {
        std::cout<<"Int: impossible"<<std::endl;
        std::cout<<"Float: impossible"<<std::endl;
        std::cout<<"Double: impossible"<<std::endl;
    }
    else
    {
        std::cout<<"Int: "<< nbr <<std::endl;
        std::cout<<"Float: "<<std::fixed<<std::setprecision(2)<<static_cast<float>(nbr)<<"f"<<std::endl;
        std::cout<<"Double: "<<std::fixed<<std::setprecision(2)<<static_cast<double>(nbr)<<std::endl;
    }
       
}

void ScalarConverter::convertFloat(std::string input)
{
    long long n = atol(input.c_str());
    try
    {
        checkChar(input);
        unsigned int i = 0;
        bool iswhole = true;
        while (i < input.length() - 1 && (input[i] == '.' || std::isdigit(input[i]) || input[i] == 'f'))
        {
            if (input[i] == '.')
            {
                i++;
                while (i < input.length() - 1 && input[i] != 'f')
                {
                    if (input[i] != '0')
                    {
                        iswhole = false;
                        break;
                    }
                    i++;
                }
            }
            i++;
        }
        if (iswhole == false)
            std::cout<<"Char: impossible"<<std::endl;
        else
            std::cout<<"Char: "<<static_cast<char>(n)<<std::endl;  
    }
    catch (const ScalarConverter::Impossible &e)
    {
        std::cout << "Char: " << e.what() << std::endl;
    }
    if (n >= INT_MAX || n < INT_MIN)
        std::cout<<"Int: impossible"<<std::endl;
    else
        std::cout<<"Int: "<< n <<std::endl;
    if (checkRangeFloat(input) == 0)
        std::cout<<"Double: impossible"<<std::endl;
    else
        checkRangeDouble(input);
}


void ScalarConverter::convertDouble(std::string input)
{
    long long n = atol(input.c_str());
    try
    {
        checkChar(input);
        unsigned int i = 0;
        bool iswhole = true;
        while (i < input.length())
        {
            if (input[i] == '.')
            {
                i++;
                while(i < input.length())
                {
                    if (input[i] != '0')
                    {
                        iswhole = false;
                        break;
                    }
                    i++;
                }
            }
            i++;
        }
        if (iswhole == false)
            std::cout<<"Char: impossible"<<std::endl;
        else
            std::cout<<"Char: "<<static_cast<char>(n)<<std::endl; 
    }
    catch (const ScalarConverter::Impossible &e)
    {
        std::cout << "Char: " << e.what() << std::endl;
    }
    try
    {
        checkRangeInt(input);
        std::cout<<"Int: "<< n <<std::endl;
    }
    catch (const ScalarConverter::Impossible &e)
    {
        std::cout << "Int: " << e.what() << std::endl;
    }
    checkRangeFloat(input);
    checkRangeDouble(input);
}

void ScalarConverter::checkInfmin()
{
    std::cout<<"Char: impossible"<<std::endl;
    std::cout<<"Int: impossible"<<std::endl;
    std::cout<<"Float: -inff"<<std::endl;
    std::cout<<"Double: -inf"<<std::endl;
}

void ScalarConverter::checkInfmax()
{
    std::cout<<"Char: impossible"<<std::endl;
    std::cout<<"Int: impossible"<<std::endl;
    std::cout<<"Float: +inff"<<std::endl;
    std::cout<<"Double: +inf"<<std::endl;
}

void ScalarConverter::checkNan()
{
    std::cout<<"Char: impossible"<<std::endl;
    std::cout<<"Int: impossible"<<std::endl;
    std::cout<<"Float: nanf"<<std::endl;
    std::cout<<"Double: nan"<<std::endl;
}

void ScalarConverter::checkError()
{
    std::cout<<"Char: impossible"<<std::endl;
    std::cout<<"Int: impossible"<<std::endl;
    std::cout<<"Float: impossible"<<std::endl;
    std::cout<<"Double: impossible"<<std::endl;
}

void ScalarConverter::checkAll(std::string input)
{
    unsigned long int i = 0;
    if (input == "nan" || input == "nanf")
        checkNan();
    else if (input == "-inff" || input == "-inf")
        checkInfmin();
    else if (input == "+inff" || input == "+inf")
        checkInfmax();
    else if (std::isprint(input[0]) && !std::isdigit(input[0]) && input.length() == 1)
        convertChar(input);
    else if (input[input.length() - 1] == 'f')
    {
        unsigned long int i = 0;
        bool isdecimal = false;
        if (input[i] == '-' || input[i] == '+')
            i++;
        while (i < input.length() - 1 && (input[i] == '.' || std::isdigit(input[i])))
        {
            if (input[i] == '.')
            {
                isdecimal = true;
            }
            i++;
        }
        if (i == input.length() - 1 && isdecimal)
            convertFloat(input);
        else
            checkError();
    }
    else if (std::isdigit(input[i]) || input[i] == '+' || input[i] == '-')
    {
        if (input[i] == '-' || input[i] == '+')
            i++;
        bool decimal_found = false;
        while (i < input.length() && (std::isdigit(input[i]) || input[i] == '.'))
        {
            if(input[i] == '.')
                decimal_found = true;
            i++;
        }
        if (i == input.length())
        {
            if(decimal_found)
                convertDouble(input);
            else
                convertInt(input);
         }
    }
    else
        checkError();
}

void ScalarConverter::convert(std::string input)
{
    checkAll(input);
}
