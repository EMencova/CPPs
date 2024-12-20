/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:01:09 by emencova          #+#    #+#             */
/*   Updated: 2024/12/18 00:03:27 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <list>
# include <algorithm>
# include <iterator>
# include <climits>

class Span
{
    private:
        unsigned int _n;
        std::list<int>nums;
        Span();

    public: 
        Span(unsigned int n);
        Span(const Span &original);
        Span &operator=(const Span &original);
        ~Span();

        void addNumber(int nbr);
        void display();
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
        
        template <typename It>

        void addRange(It begin, It end)
        {
            while(begin != end)
            {
                addNumber(begin);
                begin++;
            }
        }
};

#endif