/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:57:42 by emencova          #+#    #+#             */
/*   Updated: 2024/11/17 13:14:24 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : virtual public Animal
{
    public:
        Cat();
        Cat(const Cat &original);
        Cat &operator=(const Cat &original);
        ~Cat();
        void setType();
        void getType();
        void makeSound();
};


#endif