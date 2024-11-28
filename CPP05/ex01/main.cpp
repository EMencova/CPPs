/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:22 by emencova          #+#    #+#             */
/*   Updated: 2024/11/28 12:39:46 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main() 
{
	Bureaucrat *	Donald = NULL;
	Bureaucrat *	Joe = NULL;
	Form *			simpleDoc = NULL;

	try {
		Donald = new Bureaucrat("Donald", 55);
		Joe = new Bureaucrat("Joe", 35);
		simpleDoc = new Form("Simple Document", 50);
		simpleDoc->beSigned(*Donald);
		simpleDoc->beSigned(*Joe);
		Donald->increment();
	}
	catch (const std::exception& e)
    {
		std::cerr << e.what() << '\n';
	}
	std::cout << *simpleDoc << std::endl;
	delete Donald;
	delete Joe;
	delete simpleDoc;
}