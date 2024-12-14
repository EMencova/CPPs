/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/13 16:35:36 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void print_temp(T &nbr)
{
    std::cout<<nbr<<std::endl;
}

template <typename T>

void increment_num(T &nbr)
{
    nbr+=4;
}

template <typename T>

void times_nbr(T &nbr)
{
    nbr *= nbr;
}

template <typename T>

void toUpper(T &str)
{
    for(unsigned int i = 0;i < str.length();i++)
        str[i] = std::toupper(str[i]);
}


int main()
{
   int array[] = {1,2,3,4,5,6};
   size_t len = sizeof(array) / sizeof(array[0]);

    std::string sarray[]= {"Hi","Hello","Hey"};
    size_t slen = sizeof(sarray) / sizeof(sarray[0]);

   for (size_t i = 0; i < len; i++)
   {
        print_temp(array[i]);
   }
   std::cout<<"_______________________________"<<std::endl;
   std::cout<<std::endl;
   iter(array, len, increment_num);

    for (size_t i = 0; i < len; i++)
    {
        print_temp(array[i]);
    }

   std::cout<<"_______________________________"<<std::endl;
   std::cout<<std::endl;
   iter(array, len, times_nbr);

    for (size_t i = 0; i < len; i++)
    {
        print_temp(array[i]);
    }

    std::cout<<"_______________________________"<<std::endl;
    std::cout<<std::endl;
    iter(array, len, times_nbr);

    for (size_t i = 0; i < slen; i++)
    {
        print_temp(sarray[i]);
    }

    iter(sarray,3,toUpper);
    std::cout<<"_______________________________"<<std::endl;
    std::cout<<std::endl;
    
    for (size_t i = 0; i < slen; i++)
    {
        print_temp(sarray[i]);
    }
    
}