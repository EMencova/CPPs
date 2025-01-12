/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/12 10:24:19 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(){}


RPN::RPN(char *str)
{
    int a = 0;
    int b = 0;
    int res = 0;

    check(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ') 
            continue;
        else if (isdigit(str[i]))
            rpn.push(str[i] - '0');
        else if (str[i] == '/' || str[i] == '*' || str[i] == '-' || str[i] == '+')
        {
            if (rpn.size() < 2)
            {
                std::cout << "Error: not enough operands for operator " << str[i] << std::endl;
                return;
            }
            b = rpn.top();
            rpn.pop();
            a = rpn.top();
            rpn.pop();
            switch (str[i])
            {
                case '*':
                    res = a * b;
                    break;
                case '/':
                    if (b == 0)
                    {
                        std::cout << "Error: division by zero." << std::endl;
                        return;
                    }
                    res = a / b;
                    break;
                case '-':
                    res = a - b;
                    break;
                case '+':
                    res = a + b;
                    break;
                default:
                    break;
            }
            rpn.push(res);
        }       
    }
    std::cout<< rpn.top() << std::endl;
}


void RPN::check(char *str)
{
    int sign = 0;
    int num = 0;
    int error = 0;
    
    for (int i = 0; str[i] != '\0';i++)
    {
        if(str[i] == ' ')
            i++;
        else if (isdigit(str[i]))
            num++;
        else if(str[i] == '/' || str[i] == '*' || str[i] == '-' || str[i] == '+')
            sign++;
        else
            error = 1;
    }
    if (sign != num - 1)
        throw std::runtime_error("Error");
    else if (error == 1)
        throw std::runtime_error("Error");
}


RPN::RPN(const RPN &original)
{
    rpn = original.rpn;
}

RPN &RPN::operator=(const RPN &original)
{
    if(this != &original)
        rpn = original.rpn;
    return (*this);
}

RPN::~RPN()
{
    
}