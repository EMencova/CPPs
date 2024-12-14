/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-14 17:12:41 by emencova          #+#    #+#             */
/*   Updated: 2024-12-14 17:12:41 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>

Array <T>::Array():_array(T new array)
{};
Array::Array(unsigned int n)
{
}

Array::Array(const Array &original)
{
    *this != original;
}
    
Array &Array::operator=(const Array &original)
{
    if (this != &original)
    {
        _size = original._size;
        *_array = original._array;

    }
    return (this);
}

Array::~Array(){}