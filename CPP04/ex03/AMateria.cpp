/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:54:21 by emencova          #+#    #+#             */
/*   Updated: 2024/11/19 10:28:49 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/AMateria.hpp"

AMateria::AMateria()
{
       std::cout<<"AMateria default constructor called."<<std::endl;
}
 
AMateria::AMateria(std::string const &type)
{
    _type = type;
}

AMateria::AMateria(const AMateria &original)
{
    *this = original;
    std::cout<<"AMateria copy constructor called."<<std::endl;
}

AMateria &AMateria::operator=(const AMateria &original)
{
    if (this != &original)
        _type = original._type;
    std::cout<<"AMateria copy assignment constructor called."<<std::endl;
    return(*this);
}

AMateria::~AMateria()
{
    std::cout<<"AMateria destructor called."<<std::endl;
}

 std::string const &AMateria::getType() const
 {
    return (_type); 
 }
 
 void AMateria::use(ICharacter &target)
 {
    std::cout<<_type << "targets " << target.getName();
 }

