/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/14 20:49:31 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Merge::Merge(){}
 
Merge::Merge(char **str, int count)
{
    _size = count;
    _array = new int[_size];

    for (int i = 0; i < _size; ++i)
    {
        for (int j = 0; str[i][j] != '\0'; ++j)
        {
            if (!std::isdigit(str[i][j]))
            {
                std::cerr << "Error: only numbers allowed: " << str[i] << std::endl;
                delete[] _array;
                exit(1);
            }
        }
        _array[i] = std::atoi(str[i]);
        if (_array[i] <= 0)
        {
            std::cerr << "Error: numbers must be positive: " << str[i] << std::endl;
            delete[] _array;
            exit(1);
        }
        for (int j = 0; j < i; ++j)
        {
            if (_array[i] == _array[j])
            {
                std::cerr << "Error: duplicate number found: " << _array[i] << std::endl;
                delete[] _array;
                exit(1);
            }
        }
    }
    vsplit_add_one(_array);
}


Merge::~Merge()
{
    delete[] _array;
}

Merge::Merge(const Merge &original)
{
    _size = original._size;
    v = original.v;
    d = original.d;    
}

Merge &Merge::operator=(const Merge &original)
{
    if(this != &original)
    {
        _size = original._size;
        v = original.v;
        d = original.d;
    }
    return (*this);
}

void Merge::vsplit_add_one(int *array)
{
    int left[_size/2 + 1];
    int right[_size/2];
    
    for (int i = 0; i < _size; i+=2)
    {
        left[i] = array[i];
        right[i] = array[i + 1];      
        v.push_back(std::make_pair(left[i],right[i]));
    }
    swap_pair();
    for (std::vector<std::pair<int, int> >::iterator it = v.begin(); it != v.end(); ++it)
       std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;

    for (std::vector<std::pair<int, int> >::iterator it = v.begin(); it != v.end(); ++it)
    {
        v.push_back(std::make_pair<pair())
    } 
    
}

/*
{
    int len_left = 0;
    
    if (len % 2 == 0)
        len_left = len / 2;
    else if (len % 2 == 1)
        len_left = len / 2 + 1;
        
    int len_right = len / 2;
    int right[len_right];
    int left[len_left];

    for(int i = 0; i < len_left; i++)
    {
        std::cout<<"loop left len"<<std::endl;
        std::cout<<array[i]<<std::endl;
        left[i] = array[i];
    }
    int i = len_left;
    int j = 0;
    while (i < len)
    {
        std::cout<<"loop right len"<<std::endl;
        std::cout<<array[i]<<std::endl;
        right[j] = array[i];
        j++;
        i++;
    }
    for(int i = 0; i < len_left; i++)
        std::cout<<"left array: "<<left[i]<<std::endl;

    for(int i = 0; i < len_right; i++)
        std::cout<<"right array: "<<right[i]<<std::endl;
    if (len % 2 == 1)
    {
        right[len_left -1]=left[len_left -1];
    }    
    for (int i = 0; i < len_left; i++)
    {
        std::cout<<"left"<<std::endl;
        std::cout<<left[i]<<std::endl;
        std::cout<<"right"<<std::endl;
        std::cout<<right[i]<<std::endl;
        v.push_back(std::make_pair(left[i],right[i]));
    }

  //  for (std::vector<std::pair<int, int> >::iterator it = v.begin(); it != v.end(); ++it)
  //      std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
      
}
*/

void Merge::swap_pair()
{
    for (std::vector<std::pair<int, int> >::iterator it = v.begin(); it != v.end(); ++it)
    {
        if (it->first > it->second)
        {
            int temp = it->first;
            it->first = it->second;
            it->second = temp;
        }
    }
}