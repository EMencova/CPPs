/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 15:01:15 by emencova          #+#    #+#             */
/*   Updated: 2024-12-16 15:01:15 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(){};

Span::Span(unsigned int n): _n(n)
{
}

Span::Span(const Span &original): nums(original.nums)
{
    _n = original._n;
}

Span &Span::operator=(const Span &original)
{
    if(this != &original)
    {
        _n = original._n;
        nums = original.nums;
    }
    return (*this);
}

Span::~Span(){}

void Span::display()
{
    for(std::list<int>::iterator it = nums.begin(); it != nums.end(); it++)
    {
        std::cout<<*it<<std::endl;
    }
}
void Span::addNumber(int nbr)
{
    if (nums.size() >= _n)
            throw std::out_of_range("Container is full.");
    nums.push_back(nbr);
}

unsigned int Span::shortestSpan() const
{
    if(nums.size() < 2)
        throw std::out_of_range("Not enough numbers.");
    std::list<int>sorted =  nums;
    sorted.sort();
    
    return(min);
}


unsigned int Span::longestSpan() const
{
    if (nums.size() < 2)
        throw std::out_of_range("Not enough numbers.");
    int min = *std::min_element(nums.begin(), nums.end());
    int max = *std::max_element(nums.begin(), nums.end());

    return (max - min);
}