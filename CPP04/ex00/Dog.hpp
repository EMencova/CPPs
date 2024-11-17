/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:59:29 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 13:14:12 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP


class Dog : virtual public Animal
{
    public:
        Dog();
        Dog(const Dog &original);
        Dog &operator=(const Dog &original);
        ~Dog();
        void setType();
        void getType();
        void makeSound();
    
};

#endif