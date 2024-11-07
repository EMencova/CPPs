/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:42:40 by emencova          #+#    #+#             */
/*   Updated: 2024/10/22 18:10:12 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void searchContacts(PhoneBook &PPBB)
{
    system("clear");

    if (PPBB.nbr == 0)
    {
        std::cout << "0 contacts." << std::endl;
        return;
    }
    
    std::cout << std::setw(10) << std::right << "Index" << " | "
             << std::setw(10) << std::right << "First Name" << " | "
             << std::setw(10) << std::right << "Last Name" << " | "
             << std::setw(10) << std::right << "Nick Name" << " |" << std::endl;

    for (int i = 0; i < PPBB.nbr; i++)
        PPBB.Contacts[i].printContact(i);

    int index;
    std::cout << "Enter the index number to view the contact details: ";

    while (!(std::cin >> index))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input! Please enter a valid number: ";
    }

    if (index > 0 && index <= PPBB.nbr)
    {
        system("clear");
        PPBB.Contacts[index - 1].displayFullContact();
    }
    else
        std::cout << "Invalid index!" << std::endl;

    std::cout << "Press any key to return to the menu." << std::endl;
    std::cin.ignore();
    std::cin.get();
}

int main()
{
    PhoneBook PPBB;
    std::string cmnd;

    while (1) 
    {
        system("clear");
        std::cout << " ADD | SEARCH | EXIT " << std::endl;
        std::cin >> cmnd;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (cmnd == "ADD") 
        {
            system("clear");
            PPBB.Contacts[PPBB.current].setFirstName();
            PPBB.Contacts[PPBB.current].setLastName();
            PPBB.Contacts[PPBB.current].setNickName();
            PPBB.Contacts[PPBB.current].setPhoneNumber();
            PPBB.Contacts[PPBB.current].setDarkestSecret();
            PPBB.current = (PPBB.current + 1) % 8;
            if (PPBB.nbr < 8)
                PPBB.nbr++;       
        }
        else if (cmnd == "SEARCH")
            searchContacts(PPBB);
        else if (cmnd == "EXIT")
            break;
    }
    return (0);
}

