/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/13 16:24:55 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T>

T const &min(T &a, T &b)
{
    return ((a < b) ? a : b);
}

template <typename T>

T const &max (T &a, T &b)
{
    return ((a > b) ? a : b);
}

#endif