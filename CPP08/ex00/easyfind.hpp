/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 15:39:58 by emencova          #+#    #+#             */
/*   Updated: 2024-12-16 15:39:58 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>

template<typename T>

typename T::iterator easyfind(T &cont, int value)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), value);
    if(it != cont.end())
    {
        std::cout<<"Value found: "<<*it<<std::endl;
    }
    else
        throw std::runtime_error("Value not found!");
    
    return (it);
}


#endif