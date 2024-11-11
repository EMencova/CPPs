/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:13 by emencova          #+#    #+#             */
/*   Updated: 2024/11/11 17:49:26 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _value;
        static const int    _bits;
        Fixed();

    public:
        
        Fixed(int value, static const int bits);
        Fixed(const Fixed &original);
        Fixed &operator=(Fixed const &rhs);
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(inst const raw);
};

#endif