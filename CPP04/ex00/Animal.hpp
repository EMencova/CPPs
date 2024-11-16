/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:55:12 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 17:04:29 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &original);
        Animal &operator=(const ANimal &original);
        ~Animal();
            
};

#endif