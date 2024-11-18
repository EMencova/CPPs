/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:08:31 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 22:12:36 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./incl/ICharacter.hpp"

Character::Character()
{
    std::cout<<"Character default constructor called."<<std::endl;
    for (int i = 0; i < 4; i++)
        inv[i] = NULL;
}


Character::Character(std::string name)
{
    
}

Character::~Character()
{
    std::cout<<"Character destructor called."<<std::endl;
    
    for (int i = 0; i < 4; i++)
    {
        if (inv[i])
            delete inv[i];
    }
}



        Character(const Character &original);
        Character &operator=(const Character &original);

        void    equip(AMateira *m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        std::string const &getName() const;