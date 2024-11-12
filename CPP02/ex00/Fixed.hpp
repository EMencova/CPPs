/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:13 by emencova          #+#    #+#             */
/*   Updated: 2024/11/12 09:12:02 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
    private:
        int                 _raw;
        static const int    _bits = 8;
        
    public:
        
        Fixed();
        Fixed(const Fixed &original);
        Fixed &operator=(Fixed const &original);
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif