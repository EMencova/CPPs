/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 21:37:37 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <iomanip>
# include <climits>
# include <limits>
# include <cfloat>
# include <cstdio>

class ScalarConverter
{
    private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &original);
    ScalarConverter &operator=(const ScalarConverter &original);
    ~ScalarConverter();

    public:
    static void convert(std::string input);
    static void convertChar(std::string c);
    static void convertInt(std::string input);
    static void convertFloat(std::string input);
    static void convertDouble(std::string input);
    static void checkInfmin();
    static void checkInfmax();
    static void checkNan();
    static void checkError();
    static void checkAll(std::string input);
    static void handleZero();

};

#endif