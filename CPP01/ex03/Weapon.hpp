/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:16:01 by emencova          #+#    #+#             */
/*   Updated: 2024/11/05 15:09:01 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        std::string	getType(std::string wtype);
		void	setType(string type);
    
};