/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:12:41 by emencova          #+#    #+#             */
/*   Updated: 2024/12/15 12:26:21 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T>

Array<T>::Array():_array(NULL), _size(0)
{}

template <typename T>

Array<T>::Array(unsigned int n): _array(new T[n]()), _size(n)
{
}

template <typename T>

Array<T>::Array(const Array &original): _array(new T[original._size]), _size(original._size)
{
    for(unsigned int i = 0; i < original._size;i++)
    {
        _array[i] = original._array[i];
    }
}

template <typename T>
    
Array<T> &Array<T>::operator=(const Array &original)
{
    if (this != &original)
    {
        delete[] _array;
        _size = original._size;
        _array = new T [original._size];
        for (unsigned int i = 0; i < original._size; i++)
        {
            _array[i] = original._array[i];
        }
    }
    return (*this);
}

template <typename T>

Array<T>::~Array()
{
    delete [] _array;
}

template <typename T>

unsigned int Array<T>::size(void) const
{
    return (_size); 
}

template <typename T>

T& Array<T>::operator[](unsigned int idx) const
{
    if (idx > _size)
    {
        throw Array::OutOfBonds();
    }
    return (_array[idx]);
}

#endif