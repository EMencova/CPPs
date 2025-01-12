/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2025/01/12 20:53:18 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <vector>
# include <deque>

class Merge
{
    private:
    std::vector<std::pair<int,int> >v;
    std::deque<std::pair<int,int> >d;
    int _size;
    void vsplit_add(int *array, int len);

    public:
    Merge();
    Merge(char *str);
    ~Merge();
    Merge(const Merge &original);
    Merge &operator=(const Merge &original);
    
};
