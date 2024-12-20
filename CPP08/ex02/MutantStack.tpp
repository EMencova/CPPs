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

template <typename T>

MutantStack<T> :: MutantStack(): std::stack<T>(){}

template <typename T>

MutantStack<T>::MutantStack(const MutantStack &original)
{
    MutantStack::operator=(original);
}

template <typename T>

MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &original)
{
    if (this == &original)
        return (*this);

    MutantStack::operator=(original);
    return (*this);
}

template <typename T>

MutantStack<T>::~MutantStack(){};

template <typename T>

unsigned int MutantStack<T>::getSize() const
{
    return this->std::stack<T>.size();
}

template <typename T>

typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return(this->c.begin());
}

template <typename T>

typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return(this->c.end());
}

template <typename T>

typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
     return(this->c.begin());
}

template <typename T>

typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return(this->c.end());
}
