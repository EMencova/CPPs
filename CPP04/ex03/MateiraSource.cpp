/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateiraSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:13:57 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 21:59:40 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout<<"MateriaSource constructor called."std::endl;
    
    for (int i = 0; i < 4; i++)
        inv[i]= NULL;
}

MateriaSource::MateriaSource(const MateriaSource &original)
{
    std::cout<<"MateriaSource copy constructor called."std::endl;
    *this = original;
}


MateriaSource &MateriaSource::operator=(const MateriaSource &original)
{
    std::cout<<"MateriaSource copy assignment constructor called."std::endl;
    if (this != &original)
    {
        for (int i = 0; i < 4; i++)
            inv[i] = original.inv[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout<<"MateriaSource destructor called."std::endl;
    for (int i = 0; i < 4; i++)
        delete inv[i];  
}

void		MateriaSourse::learnMateria(AMateria* amat)
{
    for (int i = 0; i < 4; i++)
    {
         if (inv == NULL)
         {
            inv[i] = amat;
            return;
         }  
    }
    std::cout<<"Cannot learn, full."<<std::endl;           
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	AMateria*	new = NULL;

	for (int i = 3; i >= 0; i--)
	{
		if (inv[i] != NULL && inv[i]->getType() == type)
		{
			new = inv[i]->clone();
		}
	}
	return (new);
}

