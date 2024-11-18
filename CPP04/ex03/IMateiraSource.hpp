/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateiraSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:13:54 by emencova          #+#    #+#             */
/*   Updated: 2024/11/18 13:16:59 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATEIRASOURCE_HPP
# define IMATEIRASOURCE_HPP

class IMateiraSource
{
    public:
        virtual ~IMateiraSource();
        virtual void learnMateira(AMateira*) = 0;
        virtuak AMateira* createMateira(std::string const &type) = 0;
};

#endif