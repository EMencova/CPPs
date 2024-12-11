/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/10 21:33:24 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *		data = new Data;
	uintptr_t	ptr;

	std::cout << data << std::endl;

	ptr = Serializer::serialize(data);

	std::cout << ptr << std::endl;

	data = Serializer::deserialize(ptr);

	std::cout << data << std::endl;

	delete data;
	return (0);
}