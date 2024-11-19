/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateiraSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:13:57 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 12:11:37 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    std::cout<<"MateriaSource constructor called."<<std::endl;
    
    for (int i = 0; i < 4; i++)
        inv[i]= NULL;
}

MateriaSource::MateriaSource(const MateriaSource &original)
{
    std::cout<<"MateriaSource copy constructor called."<<std::endl;
    *this = original;
}


MateriaSource &MateriaSource::operator=(const MateriaSource &original)
{
    std::cout<<"MateriaSource copy assignment constructor called."<<std::endl;
    if (this != &original)
    {
        for (int i = 0; i < 4; i++)
            inv[i] = original.inv[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    std::cout<<"MateriaSource destructor called."<<std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
            delete inv[i]; 
    } 
}

void		MateriaSource::learnMateria(AMateria* amat)
{
    for (int i = 0; i < 4; i++)
    {
         if (inv[i] == NULL)
         {
            inv[i] = amat;
            return;
         }  
    }
    std::cout<<"Cannot learn, full."<<std::endl;           
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
    AMateria* mat;
	for (int i = 3; i >= 0; i--)
	{
		if (inv[i] != NULL && inv[i]->getType() == type)
		{
			mat = inv[i]->clone();
		}
	}
	return (mat);
}

