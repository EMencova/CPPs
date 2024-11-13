/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:17:17 by emencova          #+#    #+#             */
/*   Updated: 2024/11/13 15:39:00 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
int main( void )
{
	Fixed a(-42.42f);
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}*/


int main(void)
{
    Fixed   a;
    std::cout << "a: " << a << std::endl;
    Fixed   b(2);
    std::cout << "b: " << b << std::endl;
    Fixed   c(3.5f);
    std::cout << "c: " << c << std::endl;
    Fixed   d(b);
    std::cout << "d: " << d << std::endl;
    a = c;
    std::cout << "a: " << a << std::endl;
    std::cout << "b>c: " << (b>c) << std::endl;
    std::cout << "b<c: " << (b<c) << std::endl;
    std::cout << "b>=c: " << (b>=c) << std::endl;
    std::cout << "b<=c: " << (b<=c) << std::endl;
    std::cout << "b==c: " << (b==c) << std::endl;
    std::cout << "b!=c: " << (b!=c) << std::endl;
    std::cout << "b+c: " << (b+c) << std::endl;
    std::cout << "b-c: " << (b-c) << std::endl;
    std::cout << "b*c: " << (b*c) << std::endl;
    std::cout << "b/c: " << (b/c) << std::endl;
    std::cout << "++c: " << (++c) << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "c++: " << c++ << std::endl;
    std::cout << "c: " << (c) << std::endl;
    std::cout << "--c: " << (--c) << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "c--: " << c-- << std::endl;
    std::cout << "c: " << (c) << std::endl;
    std::cout << "min(b, c): " << Fixed::min(b, c) << std::endl;
    std::cout << "max(b, c): " << Fixed::max(b, c) << std::endl;
    std::cout << "c as float: " << c.toFloat() << std::endl;
    std::cout << "c as int: " << c.toInt() << std::endl;

    return (0);
}
