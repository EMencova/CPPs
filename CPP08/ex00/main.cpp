/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 15:39:45 by emencova          #+#    #+#             */
/*   Updated: 2024-12-16 15:39:45 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>


int main()
{
    int arr[]= {1,2,3,4,5,6,7,8};
    std::vector<int>nbr(arr, arr + sizeof(arr)/sizeof(arr[0]));
    std::list<int>nblist(arr, arr + sizeof(arr)/sizeof(arr[0]));
    std::deque<int>nbdeque(arr, arr + 5);
    
    std::cout<<"Testing vector.."<<std::endl;
    std::cout<<std::endl;
    try
    {
        easyfind(nbr,4);
        easyfind(nbr,6);
        easyfind(nbr,8);
    }
    catch(const std::exception &e)
    {
        std::cerr<<e.what()<<std::endl;
    }
    std::cout<<"__________________________"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Testing list..."<<std::endl;
    std::cout<<std::endl;
    try
    {
        easyfind(nblist,1);
        easyfind(nblist,3);
        easyfind(nblist,1111);
    }
    catch(const std::exception &e)
    {
        std::cerr<<e.what()<<std::endl;
    }
    std::cout<<"__________________________"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Testing deque..."<<std::endl;
    std::cout<<std::endl;
    try
    {
        easyfind(nbdeque,5);
        easyfind(nbdeque,7);
        easyfind(nbdeque,4545465);
    }
    catch(const std::exception &e)
    {
        std::cerr<<e.what()<<std::endl;
    }

}