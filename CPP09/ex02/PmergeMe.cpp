/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/18 12:37:26 by eliskam          ###   ########.fr       */
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
    _varray_len = contain_array_len();
    vsplit_add(_array);
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

void Merge::vsplit_add(int *array)
{
    int *left = new int[_size / 2 + 1];
    int *right = new int[_size / 2 + 1];

    for (int i = 0; i < _size; i += 2)
    {
        left[i / 2] = array[i];
        if (i + 1 < _size)
            right[i / 2] = array[i + 1];
        else
            right[i / 2] = 0;
        v.push_back(std::make_pair(left[i / 2], right[i / 2]));
        v_original.push_back(std::make_pair(left[i / 2], right[i / 2]));
    }
    swap_pair(v);
    swap_pair(v_original);

    //PRINTING ONLY----------------------------------------
    for (std::vector<std::pair<int, int> >::iterator it = v.begin(); it != v.end(); ++it)
    {
        std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
    }
    //-----------------------------------------------------------------
    merge_pairs();
    delete[] left;
    delete[] right;
}


int Merge::contain_array_len()
{
    int i = _size;
    int x = 0;

    if (_size <= 2)
        return (1);
        
    while (i > 2)
    {
        if (i % 2 == 0)
            i /= 2;
        else
            i = (i / 2) + 1;
        x++;
    }  
    std::cout << "Calculated _varray_len: " << x << std::endl;
    return (x); 
}

void Merge::swap_pair(std::vector<std::pair<int, int> > &vec)
{ 
    for (std::vector<std::pair<int, int> >::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        if (it->first > it->second)
            std::swap(it->first, it->second);
    }
}

void Merge::merge_pairs()
{
    std::vector<std::pair<int, int> > *array_vector = new std::vector<std::pair<int, int> >[_varray_len];
    
    array_vector[0] = v;
        
    for (int level = 1; level < _varray_len; ++level)
    {
        if (array_vector[level-1].size() < 2)
            break;

        std::vector<std::pair<int, int> > current;

        for (size_t i = 0; i < array_vector[level - 1].size(); i += 2)
        {
            if (i + 1 < array_vector[level - 1].size())
            {
                std::pair<int, int> first = array_vector[level - 1][i];
                std::pair<int, int> second = array_vector[level - 1][i + 1];
                current.push_back(std::make_pair(first.second, second.second));
            }
            else
            {
                current.push_back(array_vector[level - 1][i]);
            }
        }

        swap_pair(current);
        array_vector[level] = current;
    }

    ////// PRINTING ONLY-------------------------------------------------------
    for (int level = 0; level < _varray_len; ++level)
    {
        if (array_vector[level].empty()) break;

        std::cout << "Level " << level << ": ";
        for (size_t i = 0; i < array_vector[level].size(); ++i)
            std::cout << "(" << array_vector[level][i].first << ", " << array_vector[level][i].second << ") ";
        std::cout << std::endl;
    }
   // ----------------------------------------------------------------------
    delete[] array_vector;
}





