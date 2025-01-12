/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/12 20:53:13 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

Merge::Merge()
{  
}
Merge::Merge(char *str)
{
    int i = 0; 
    while (array[i] != '\0')
    {
        _size++;
        i++;
    }
    int *array = std::atoi(str.c_str());
    vsplit_add(array, _size);
            
}

Merge::~Merge()
{   
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

void Merge::vsplit_add(int *array, int len)
{
    std::vector<std::pair<int,int> >v;
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

int stringToInt(const std::string &str)
{
    if (str.empty())
    {
        std::cerr << "Error: Cannot convert an empty string to an integer." << std::endl;
        return (0;
    }
    int res = std::atoi(str.c_str());

    return (res);
}