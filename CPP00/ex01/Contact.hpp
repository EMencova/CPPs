/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:13:43 by emencova          #+#    #+#             */
/*   Updated: 2024/10/22 18:10:06 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cstdlib>

class Contact
{
public:
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string Darkest_Secret;

    std::string formatString(const std::string& str)
    {
        if (str.size() > 10)
            return str.substr(0, 9) + ".";
        else
            return str;
    }
    void printContact(int index)
    {
        std::cout << std::setw(10) << std::right << index + 1 << " | "
             << std::setw(10) << std::right << formatString(FirstName) << " | "
             << std::setw(10) << std::right << formatString(LastName) << " | "
             << std::setw(10) << std::right << formatString(NickName) << " |" << std::endl;
    }
    void displayFullContact()
    {
        std::cout << "First name: " << FirstName << std::endl;
        std::cout << "Last name: " << LastName << std::endl;
        std::cout << "Nick name: " << NickName << std::endl;
        std::cout << "Phone number: " << PhoneNumber << std::endl;
        std::cout << "Darkest secret: " << Darkest_Secret << std::endl;
    }
    void setFirstName()
    {
        std::cout << "Enter first name: ";
        std::getline(std::cin, FirstName);
    }

    void setLastName()
    {
        std::cout << "Enter last name: ";
        std::getline(std::cin, LastName);
    }

    void setNickName()
    {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, NickName);
    }

    void setPhoneNumber()
    {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, PhoneNumber);
    }

    void setDarkestSecret()
    {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, Darkest_Secret);
    }
};

#endif
