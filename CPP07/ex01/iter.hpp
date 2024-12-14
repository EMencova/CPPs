/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/14 11:56:06 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP


# include <iostream>
# include <string>

template <typename T>

void iter(T *array, size_t len, void (*f)(T&))
{
    if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}


#endif
