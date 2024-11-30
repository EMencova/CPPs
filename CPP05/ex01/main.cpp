/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:22 by emencova          #+#    #+#             */
/*   Updated: 2024/11/30 11:54:18 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main() 
{
	Bureaucrat *	Alan = NULL;
	Bureaucrat *	Tom = NULL;
	Form *			firstForm = NULL;
	Form *			secondForm = NULL;
	Form *			thirdForm = NULL;

	try
	{
		Alan = new Bureaucrat("Alan", 55);
		Tom = new Bureaucrat("Tom", 45);
		firstForm = new Form("First Form", 50);
		firstForm->beSigned(*Alan);
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	try
	{
		secondForm = new Form("Second Form", 50);
		thirdForm = new Form("Third Form", 42);
		secondForm->beSigned(*Tom);
		for(int i = 0; i < 5; i++)
		{
			thirdForm->beSigned(*Tom);
			Tom->increment();
		}
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	//std::cout << *simpleForm << std::endl;
	delete Alan;
	delete Tom;
	delete firstForm;
	delete secondForm;
	delete thirdForm;
	
}