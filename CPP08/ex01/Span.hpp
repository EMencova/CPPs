/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 15:01:09 by emencova          #+#    #+#             */
/*   Updated: 2024-12-16 15:01:09 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <list>
# include <algorithm>
# include <iterator>

class Span
{
    private:
        unsigned int _n;
        std::list<int>nums;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span &original);
        Span &operator=(const Span &original);
        ~Span();

        void addNumber(int nbr);
        void display();
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
};


#endif