/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:47:55 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 11:47:37 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout<<"ShrubberyCreationForm default constructor called."<<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout<<"ShrubberyCreationForm destructor called."<<std::endl;
       
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &original):AForm(original),_target(original._target)
{
    std::cout<<"ShrubberyCreationForm copy constructor called."<<std::endl;
    *this = original;      
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &original)
{
    std::cout<<"ShrubberyCreationForm copy assignment constructor called."<<std::endl;
    if(this != &original)
    {
        _target = original._target;   
    }
    return(*this);      
}


void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > getGradeExec())
        throw Bureaucrat::GradeTooLowException();
    if (getIfSigned() == false)
        throw AForm::FormNotSignedException();

    // Use _target directly if it's a string, or ensure getName() is valid
    std::string filename = _target + "_shrubbery";

    std::ofstream outfile(filename.c_str());
    if (!outfile.is_open())
    {
        std::cerr << "Error: Could not open or create the file: " << filename << std::endl;
        return;
    }

    outfile <<
            "         *" << std::endl <<
            "        /o/" << std::endl <<
            "       /o//o/" << std::endl <<
            "     /o//o//o/" << std::endl <<
            "    /o//o//o//o/" << std::endl <<
            "  /o//o//o//o//o/" << std::endl <<
            " /o//o//o//o//o//o/" << std::endl <<
            "/o//o//o//o//o//o//o/" << std::endl <<
            "        ||||" << std::endl <<
            "        ||||" << std::endl <<
            "   _____||||______" << std::endl << std::endl;

    outfile.close();
    std::cout << "Shrubbery created in file: " << filename << std::endl;
}





std::ostream &	operator<<(std::ostream &o, ShrubberyCreationForm const &ref)
{
	o << "Form name : " << ref.getName() << std::endl;
	o << "Signed : ";
	if (ref.getGradeSign())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << ref.getGradeSign() << " to sign it, and grade " << ref.getGradeExec() << " to execute it.";
	return o;
}

