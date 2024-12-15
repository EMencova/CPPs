/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:30:04 by emencova          #+#    #+#             */
/*   Updated: 2024/12/15 12:30:19 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
//#include "Array.tpp"

int	main()
{
	Array<int>			intArr;
	Array<int>			numbers(5);
	Array<std::string>	strArr(5);

	for (unsigned int n = 0; n < 5; n++)
		numbers[n] = rand() % 100;

	std::cout << "int array size: " << intArr.size() << std::endl;
	std::cout << "string array size: " << strArr.size() << std::endl;
	std::cout << "numbers size: " << numbers.size() << std::endl;

	std::cout << "\nNumbers assigned to int array-" << std::endl;
	intArr = numbers;

    for (unsigned int n = 0; n < intArr.size(); n++)
    {
        std::cout << intArr[n] << std::endl;
    }

	std::cout << "\n String array is - " << std::endl;
	strArr[0] = "What";
	strArr[1] = "it";
	strArr[2] = "will";
	strArr[3] = "be";
	strArr[4] = "?";

    for (unsigned int n = 0; n < strArr.size(); n++)
    {
        std::cout << strArr[n] << std::endl;
        
    }

	std::cout << "\nand  int array size" <<std::endl;
	try
	{
		std::cout << intArr[89] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "89: " << e.what() << std::endl;
	}

	try
	{
		std::cout << intArr[-8] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "-8: " << e.what() << std::endl;
	}

    try
	{
		std::cout <<"number 4 in int array is: "<<intArr[3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "4: " << e.what() << std::endl;
	}

	return (0);
}

