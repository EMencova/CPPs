/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:22 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 21:15:15 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int	main() 
{

    std::string target = "test";
	
	Bureaucrat *	bA = new Bureaucrat("bA", 2);
	Bureaucrat *	bB = new Bureaucrat("bB", 10);
	Bureaucrat *	bC = new Bureaucrat("bC", 65);
	AForm *			shru = new ShrubberyCreationForm(target);
	AForm *			rob = new RobotomyRequestForm(target);
    AForm *			pre = new PresidentialPardonForm(target);

	try
	{
		rob->beSigned(*bC);
		shru->beSigned(*bB);
        pre->beSigned(*bA);
		rob->execute(*bA);
		shru->execute(*bA);
        pre->execute(*bA);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	std::cout << *shru << std::endl;
	std::cout << *rob << std::endl;
    std::cout << *pre << std::endl;

	delete rob;
	delete shru;
    delete pre;
	delete bC;
	delete bB;
    delete bA;
}


/*

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

int main() {

	std::string target = "garden";
    try
    {
        Bureaucrat executor("Alice", 1);
        ShrubberyCreationForm shrubberyForm(target);
        shrubberyForm.beSigned(executor);
        shrubberyForm.execute(executor);
        std::ifstream infile("garden_shrubbery");
        if (!infile.is_open()) {
            std::cerr << "Test failed: File 'garden_shrubbery' was not created." << std::endl;
            return 1;
        }
        std::cout << "Contents of 'garden_shrubbery':" << std::endl;
        std::cout << infile.rdbuf() << std::endl;
        infile.close();

        std::cout << "Test passed: File created and contains expected content." << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Test failed: " << e.what() << std::endl;
    }
    return (0);
}

*/