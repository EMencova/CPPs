/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:24:22 by emencova          #+#    #+#             */
/*   Updated: 2024/12/01 11:50:45 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    Intern intern;
    AForm *f;

    std::string str1 = "28C";
    std::string str2 = "28B";
    std::string str3 = "28A";
    std::string no = "0U";
    

    try
    {
        f = intern.makeForm("shrubbery creation", str1);
        std::cout << *f << std::endl;
        std::cout << std::endl;

        f = intern.makeForm("robotomy request", str2);
        std::cout << *f << std::endl;
        std::cout << std::endl;

        f = intern.makeForm("presidential pardon", str3);
        std::cout << *f << std::endl;
        std::cout << std::endl;

        f = intern.makeForm("undefined", no);
        delete f;
    }
    catch (const Intern::noForm &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
