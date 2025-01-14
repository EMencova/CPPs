/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/14 20:47:19 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MERGE_HPP
# define MERGE_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <cstdlib>
# include <cctype>

class Merge
{
    private:
    std::vector<std::pair<int,int> >v;
    std::deque<std::pair<int,int> >d;
    int _size;
    int *_array;

    public:
    Merge();
    Merge(char **str, int count);
    ~Merge();
    Merge(const Merge &original);
    Merge &operator=(const Merge &original);
    void vsplit_add_one(int *array);
    void swap_pair();
    
};


#endif
