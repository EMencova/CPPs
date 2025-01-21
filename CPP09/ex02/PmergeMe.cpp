/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/21 04:53:27 by eliskam          ###   ########.fr       */
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
    std::cout<<"Before: "<<_array<<std::endl;
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
    int *left = new int[_size / 2];
    int *right = new int[_size / 2];
    int tempsize = _size;

    if (_size % 2 == 1)
    {
        _last = array[_size];
        tempsize -= 1;
    }

    for (int i = 0; i < tempsize; i += 2)
    {
        left[i / 2] = array[i];
        if (i + 1 < _size)
            right[i / 2] = array[i + 1];
        else
            right[i / 2] = 0;
        v.push_back(std::make_pair(left[i / 2], right[i / 2]));
    }
    swap_pair(v);

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
        
    while (i > 1)
    {
        i /= 2;
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
    ///PAIRS UP ALL UNTIL ONLY 2 LEFT, ALWAYS PAIRS WITH RIGHT(BIGGER NUMBER), saving all pairs in array_vector[i]
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
            swap_pair(current);
        }
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

   //FINDING ITS PAIR FROM PREVIOUS LEVEL AND PUSHING IT 
   std::vector<std::pair<int, int> > temp;

    for (int level = _varray_len - 1; level > 0; level--)
    {
        temp.clear();
        for (size_t i = 0; i < array_vector[level].size(); i++)
        {
            for(size_t j = 0; j < array_vector[level - 1].size(); j++)
            {
                if(array_vector[level][i].first == array_vector[level - 1][j].second || array_vector[level][i].second == array_vector[level - 1][j].second)
                        temp.push_back(std::make_pair(array_vector[level - 1][j].first,array_vector[level - 1][j].second));
            }
        }
        
        array_vector[level] = temp;

        std::cout << "The updated vector for Level " << (level) << ": ";
        for (size_t k = 0; k < array_vector[level].size(); k++) 
            std::cout << "(" << array_vector[level][k].first << ", " << array_vector[level][k].second << ") "<<std::endl;
    }
    
    std::swap(array_vector[0][0], array_vector[0][1]);
    // Print the updated Level 0
    std::cout << "Updated vector for Level 0 after swap: ";
    for (size_t k = 0; k < array_vector[0].size(); k++)
    std::cout << "(" << array_vector[0][k].first << ", " << array_vector[0][k].second << ") "<< std::endl;

    std::vector<std::pair<int, int> > temp_one;
    std::pair<int, int> zero_pair;
    bool contains_zero = false;

    for (int i = temp.size() - 1; i >= 0; --i)
    {
        const std::pair<int, int>& current_pair = temp[i];
        if (current_pair.first == 0 || current_pair.second == 0)
        {
            zero_pair = current_pair;
            contains_zero = true;
        }
        else
        temp_one.push_back(current_pair);
    }
    if (contains_zero)
        temp_one.push_back(zero_pair);
    v = temp_one;


// PRINTING ONLY---------------------------------------
    std::cout << "V is now: " << std::endl;
    for (size_t i = 0; i < v.size(); ++i)
        std::cout << "(" << v[i].first << ", " << v[i].second << ") " << std::endl;
//----------------------------------------------
     
    delete[] array_vector;
    insert();

}

void Merge::insert()
{
    vmerged.push_back(v[0].first);
    vmerged.push_back(v[0].second);

    for (int i = 0; i < 2; i++)
    {
        std::cout<<"inside vmerged: "<<std::endl;
        std::cout<<vmerged[i]<<std::endl;
    }
}

























