/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:59:29 by emencova          #+#    #+#             */
/*   Updated: 2024/11/16 17:14:20 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP


class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &original);
        Dog &operator=(const Dog &original);
        ~Dog();
    
};

#endif