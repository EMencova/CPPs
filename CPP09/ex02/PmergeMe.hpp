/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/19 17:28:56 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MERGE_HPP
# define MERGE_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <cstdlib>
# include <cctype>
# include <algorithm>

class Merge
{
    private:
    std::vector<std::pair<int,int> >v;
    std::vector<std::pair<int,int> >v_original;
    std::vector<std::pair<int, int> > *array_vector;
    std::vector<int> vmerged;

    
    std::deque<std::pair<int,int> >d;
    int _size;
    int *_array;
    int _varray_len;

    public:
    Merge();
    Merge(char **str, int count);
    ~Merge();
    Merge(const Merge &original);
    Merge &operator=(const Merge &original);
    void vsplit_add(int *array);
    void swap_pair(std::vector<std::pair<int, int> > &vec);
    void merge_pairs();
    int contain_array_len();
    void insert();
    
    
};


#endif
