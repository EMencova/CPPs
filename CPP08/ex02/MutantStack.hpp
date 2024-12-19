/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 11:58:25 by emencova          #+#    #+#             */
/*   Updated: 2024-12-18 11:58:25 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>
# include <iostream>


template<typename T>

class MutantStack : public std::stack<T>
{
    public:
    MutantStack();
    MutantStack(const MutantStack &original);
    MutantStack &operator=(const MutantStack &original);
    ~MutantStack();

    unsigned int getSize() const;
    
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>:: const_iterator const_iterator;

    iterator begin();
    iterator end();

    const_iterator begin() const;
    const_iterator end() const;

};

#include "MutantStack.tpp"

#endif