/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 14:54:13 by emencova          #+#    #+#             */
/*   Updated: 2024/11/13 15:20:54 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _raw;
        static const int    _bits = 8;
        
    public:
        
        Fixed();
        Fixed(const int bits);
        Fixed(const float bits);
        Fixed(const Fixed &original);
        ~Fixed();
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void)const;
        int toInt(void)const;

        Fixed &operator=(Fixed const &original);
        bool operator>(Fixed const &original);
        bool operator<(Fixed const &original);
        bool operator>=(Fixed const &original);
        bool operator<=(Fixed const &original);
        bool operator==(Fixed const &original);
        bool operator!=(Fixed const &original);
        Fixed operator+(Fixed const &original);
        Fixed operator-(Fixed const &original);
        Fixed operator/(Fixed const &original);
        Fixed operator*(Fixed const &original);
        
        Fixed &operator--(void);
        Fixed &operator++(void);
        Fixed operator--(int del);
        Fixed operator++(int del);

        static Fixed &min(Fixed &one, Fixed &two);
	    static const Fixed &min(const Fixed &one, const Fixed &two);
	    static Fixed &max(Fixed &one, Fixed &two);
	    static const Fixed &max(const Fixed &one, const Fixed &two);    
};

std::ostream& operator<<(std::ostream& out, const Fixed& right);

#endif