/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/02 12:11:45 by eliskam          ###   ########.fr       */
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


void ScalarConverter::convertChar(std::string c)
{
    if (std::isprint(c[0]) && !std::isdigit(c[0]))
    {
        if (c.length() - 1 == 1)
        {
            std::cout<<"Char: "<<c[0]<<std::endl;
            std::cout<<"Int: "<< static_cast<int>(c[0]) <<std::endl;
            std::cout<<"Float: "<<std::setprecision(1)<<static_cast<float>(c[0])<<"f"<<std::endl;
            std::cout<<"Double: "<<std::setprecision(1)<<static_cast<double>(c[0])<<std::endl;
        }
    }
}

void ScalarConverter::convertInt(std::string input)
{
    int nbr = atoi(input.c_str());
    if (input[0] <= 0 || input[0] >= 127)
        std::cout<<"Char: impossible"<<std::endl;
    else if (input[0] == 127 || input[0] <= 32 || nbr == 0)
        std::cout<<"Char: non displayable"<<std::endl;
    else
        std::cout<<"Char : "<<static_cast<char>(input[0])<<std::endl;
    std::cout<<"Int: "<< nbr <<std::endl;
    std::cout<<"Float: "<<std::fixed<<std::setprecision(1)<<static_cast<float>(nbr)<<"f"<<std::endl;
    std::cout<<"Double: "<<std::fixed<<std::setprecision(1)<<static_cast<double>(nbr)<<std::endl;
}

void ScalarConverter::convertFloat(std::string input)
{
    int nbr = atof(input.c_str());
     if (input[0] <= 0 || input [0]>= 127)
        std::cout<<"Char: impossible"<<std::endl;
    if (input[0] == 127 || input[0] <= 32)
        std::cout<<"Char: non displayable"<<std::endl;
    else
        std::cout<<"Char : "<<static_cast<char>(input[0])<<std::endl;
    std::cout<<"Int: "<<static_cast<int>(nbr)<<std::endl;
    std::cout<<"Float: "<<std::fixed<<std::setprecision(1)<<static_cast<float>(nbr)<<"f"<<std::endl;
    std::cout<<"Double: "<<std::fixed<<std::setprecision(1)<<static_cast<double>(nbr)<<std::endl;
}

void ScalarConverter::convertDouble(std::string input)
{
    int nbr = atof(input.c_str());
    if (input[0] <= 0 || input[0] >= 127)
        std::cout<<"Char: non displayable"<<std::endl;
    if (input[0]== 127 || (input[0] <= 32 && input[0] > 0))
        std::cout<<"Char: impossible"<<std::endl;
    else
        std::cout<<"Char : "<<static_cast<char>(input[0])<<std::endl;
    std::cout<<"Int: "<<static_cast<int>(nbr)<<std::endl;
    std::cout<<"Float: "<<std::fixed<<std::setprecision(1)<<static_cast<float>(nbr)<<"f"<<std::endl;
    std::cout<<"Double: "<<std::fixed<<std::setprecision(1)<<nbr<<std::endl;
}

void ScalarConverter::checkInfmin()
{
    std::cout<<"Char: impossible"<<std::endl;
    std::cout<<"Int: "<<INT_MIN <<std::endl;
    std::cout<<"Float: "<<FLT_MIN<<std::endl;
    std::cout<<"Double: "<<DBL_MIN<<std::endl;
}

void ScalarConverter::checkInfmax()
{
    std::cout<<"Char: impossible"<<std::endl;
    std::cout<<"Int: "<<INT_MAX <<std::endl;
    std::cout<<"Float: "<<FLT_MAX<<std::endl;
    std::cout<<"Double: "<<DBL_MAX<<std::endl;
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
    std::cout<<"Int: "<< 0 <<std::endl;
    std::cout<<"Float: "<< 0 <<std::endl;
    std::cout<<"Double: "<< 0 <<std::endl;
}

void ScalarConverter::handleZero()
{

}

void ScalarConverter::checkAll(std::string input)
{
    if (input == "nan" || input == "nanf")
        checkNan();
    else if (input == "-inff" || input == "-inf")
        checkInfmin();
    else if (input == "+inff" || input == "+inf")
        checkInfmax();
    else if (input[input.length() - 1] == 'f')
    {
        unsigned long int i = 0;
        while (i < input.length() - 1 && (input[i] == '.' || std::isdigit(input[i])))
            i++;
        if (i == input.length() - 1)
            convertFloat(input);
        else
            checkError();
    }
    else if (std::isdigit(input[0]))
    {
        unsigned long int i = 0;
        while (std::isdigit(input[i]))
            i++;
        if (i == input.length())
            convertInt(input);
        else
            checkError();
    }
    else if (std::isdigit(input[0]) && input.find('.') == std::string::npos)
    {
        unsigned long int i = 0;
        while(std::isdigit(input[i]) && input[i] == '.')
            i++;
        if (i == input.length())
            convertDouble(input);
        else
            checkError();
    }
    else
        checkError();
}

void ScalarConverter::convert(std::string input)
{
    checkAll(input);
}
