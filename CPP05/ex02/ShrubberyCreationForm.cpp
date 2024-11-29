/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:47:55 by emencova          #+#    #+#             */
/*   Updated: 2024/11/29 11:30:28 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
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

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getGradeExec())
        throw Bureaucrat::GradeTooLowException();
    else if (!_signed)
        throw AForm::FormNotSignedException();
    else
    {
        std::string filename = _target.getName() + "_shrubbery";

        // Use .c_str() to convert the filename string to a const char* for the std::ofstream constructor
        std::ofstream outfile(filename.c_str());
        if (!outfile.is_open())
        {
            std::cerr << "Error: Could not open or create the file: " << filename << std::endl;
            return;
        }
        for (int i = 0; i < 5; i++)
        {
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
        }

        outfile.close();
    }
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

