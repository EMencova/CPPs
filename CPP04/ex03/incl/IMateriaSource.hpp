/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:13:54 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 20:51:40 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATEIRASOURCE_HPP
# define IMATEIRASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif