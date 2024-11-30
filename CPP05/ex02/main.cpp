/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:22 by emencova          #+#    #+#             */
/*   Updated: 2024/11/30 15:43:03 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int	main() 
{


	/*
	Bureaucrat *	bA = new Bureaucrat("bA", 2);
	Bureaucrat *	bB = new Bureaucrat("bB", 10);
	Bureaucrat *	bC = new Bureaucrat("bC", 65);
	AForm *			shru = new ShrubberyCreationForm(*bB);
	AForm *			rob = new RobotomyRequestForm(*bA);

	try
	{
		rob->beSigned(*bC);
		shru->beSigned(*bB);
		rob->execute(*bA);
		shru->execute(*bA);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << *shru << std::endl;
	std::cout << *rob << std::endl;

	delete rob;
	delete shru;
	delete bC;
	delete bB;
	delete bC;*/

	Bureaucrat Alan("Alan", 1); // High enough grade
	ShrubberyCreationForm form(Alan);
	form.beSigned(Alan);

	try {
    	form.execute(Alan);
	} catch (const std::exception &e) {		
    	std::cerr << e.what() << std::endl;
	}
}
