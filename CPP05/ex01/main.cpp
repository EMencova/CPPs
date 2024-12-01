/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:22 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 09:43:33 by eliskam          ###   ########.fr       */
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
		secondForm->beSigned(*Tom);
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	
	delete Alan;
	delete Tom;
	delete firstForm;
	delete secondForm;
	
}