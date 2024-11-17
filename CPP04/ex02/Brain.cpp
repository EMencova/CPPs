/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 21:44:43 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain default constructor called."<<std::endl;
}

Brain::Brain(const Brain &original)
{
    *this = original;
    std::cout<<"Brain copy constructor called."<<std::endl;
}

Brain &Brain::operator=(const Brain &original)
{
    std::cout<<"Brain copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        for (size_t i = 0; i < 100; i++)
            ideas[i] = original.ideas[i];      
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called."<<std::endl;
}

