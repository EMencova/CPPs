/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-14 16:30:04 by emencova          #+#    #+#             */
/*   Updated: 2024-12-14 16:30:04 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array(){};
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

    }
    return (this);
}

Array::~Array(){}

