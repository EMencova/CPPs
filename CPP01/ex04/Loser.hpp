/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Loser.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:15:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/07 12:15:58 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSER_HPP
# define LOSER_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>

class Loser
{
    private:
        std::string input;
        std::string output;

    public:
        Loser(std::string file);
         ~Loser();
        
        void replace(std::string str1, std::string str2);
};

#endif