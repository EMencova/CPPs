/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/11 21:43:50 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>

void swap(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

T min(T &a, T &b)
{
    if (a > b)
     return (b);
}

T max (T &a, T &b)
{
    if (a < b)
        return(a);
}