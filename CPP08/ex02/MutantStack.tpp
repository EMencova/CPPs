/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 12:02:06 by emencova          #+#    #+#             */
/*   Updated: 2024-12-18 12:02:06 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "MutantStack.hpp"

template <typename T>

MutantStack::MutantStack(): std::stack<T>()
{   
}

template <typename T>

MutantStack::MutantStack(const MutantStack &original)
{
    MutantStack::operator=(original);
}

template <typename T>

MutantStack &MutantStack::operator=(const MutantStack &original)
{
    if (this == &original)
        return (*this);

    MutantStack::operator=(original);
    return (*this);
}

template <typename T>

MutantStack::~MutantStack(){};

template <typename T>

int MutantStack::getSize() const
{
    return (std::stack<T>.size());
}

MutantStack::iterator begin()
{
    return(c.begin());
}
MutantStack::iterator end()
{
    return(c.end());
}

MutantStack::const_iterator begin() const
{
     return(c.begin());
}

MutantStack::const_iterator end()
{
    return(c.end());
}
