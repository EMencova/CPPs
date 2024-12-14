/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eliskam <eliskam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 15:32:46 by emencova          #+#    #+#             */
/*   Updated: 2024/12/13 16:31:45 by eliskam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    float a = 66.66f;
    float b = 88.88f;

    std::string aa = "Hi2";
    std::string bb = "Hi1";
    
    int aaa = 1;
    int bbb = 2;

    std::cout<<"Before swap: "<<std::endl;
    std::cout<<"Float a: "<<a<<" | Float b: "<<b<<std::endl;
    std::cout<<"String a: "<<aa<<" | String b: "<<bb<<std::endl;
    std::cout<<"Int a: "<<aaa<<" | Int b: "<<bbb<<std::endl;
    swap(a,b);
    swap(aa,bb);
    swap(aaa,bbb);
    std::cout<<"After Swap: "<<std::endl;
    std::cout<<"Float a: "<<a<<" | Float b: "<<b<<std::endl;
    std::cout<<"String a: "<<aa<<" | String b: "<<bb<<std::endl;
    std::cout<<"Int a: "<<aaa<<" | Int b: "<<bbb<<std::endl;
    swap(a,b);
    swap(aa,bb);
    swap(aaa,bbb);
    std::cout<<"Max float is: "<<max(a,b)<<std::endl;
    std::cout<<"Max String is: "<<max(aa,bb)<<std::endl;
    std::cout<<"Max Int is: "<<max(aaa,bbb)<<std::endl;

    std::cout<<"Min float is: "<<min(a,b)<<std::endl;
    std::cout<<"Min String is: "<<min(aa,bb)<<std::endl;
    std::cout<<"Min Int is: "<<min(aaa,bbb)<<std::endl;

    
    
}