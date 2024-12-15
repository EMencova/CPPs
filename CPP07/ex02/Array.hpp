/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:29:29 by emencova          #+#    #+#             */
/*   Updated: 2024/12/15 12:25:26 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <exception>


template <typename T>

class Array
{
    private:
        T* _array;
        unsigned int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &original);
        Array &operator=(const Array &original);
        ~Array();
        
        unsigned int size(void) const;
        T& operator[](unsigned int idx) const;
        

    class OutOfBonds : public std::exception
    {
        public:
            const char *what() const throw()
        {
            return("Out of bounds!");
        }

    };
};

# include "Array.tpp"

#endif