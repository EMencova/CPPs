/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-14 16:29:29 by emencova          #+#    #+#             */
/*   Updated: 2024-12-14 16:29:29 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>

class Array
{
    private:
        T* _array;
        int _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &original);
        Array &operator=(const Array &original);
        ~Array();

    class OutOfBonds : public std::exception
    {
        public:
            const char *what() const throw()
        {
            return("Out of bounds!");
        }

    };



};

#endif