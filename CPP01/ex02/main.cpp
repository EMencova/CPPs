/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:42:45 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 13:13:07 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN.";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout <<&str<< std::endl;
    std::cout <<&stringPTR<< std::endl;
    std::cout <<&stringREF<< std::endl;
    
    std::cout <<str<< std::endl;
    std::cout <<*stringPTR<< std::endl;
    std::cout <<stringREF<< std::endl;
     
}