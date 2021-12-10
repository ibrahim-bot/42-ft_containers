/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:42:13 by ichougra          #+#    #+#             */
/*   Updated: 2021/11/25 15:56:21 by ichougra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include "vector.hpp"

int main()
{
    // std::vector <int> v1(5, 4);
    // std::vector <int> v2(v1);           //COPY
    // std::vector <int> v3 = v2;          //OPERATOR =

    // std::cout << v1[0] << std::endl;
    // std::cout << v2[0] << std::endl;
    // std::cout << v3[0] << std::endl;
    
    // std::cout << std::endl;
    // ft::vector <int> ftvecI(5, 4);
    // ft::vector <int> ftvecopy(ftvecI);   //COPY
    // ft::vector <int> ftveOp = ftvecI;    //Operator =

    // std::cout << ftvecI[0] << std::endl;
    // std::cout << ftvecopy[0] << std::endl;
    // std::cout << ftveOp[0] << std::endl;

    //-----------------------------------------------------------------------//
    // std::vector<int> vec(3, 3);
    
    // std::cout << "size = " << vec.size() << std::endl;
    // std::cout << "max size = " << vec.max_size() << std::endl;
    // std::cout << "capacity = " << vec.capacity() << std::endl;
    // std::cout << "empty = " << vec.empty() << std::endl;
  

    // std::cout << std::endl;
    // ft::vector<int> Mvec(3, 3);

    // std::cout << "size = " << Mvec.size() << std::endl;
    // std::cout << "max size = " << Mvec.max_size() << std::endl;
    // std::cout << "capacity = " << Mvec.capacity() << std::endl;
    // std::cout << "empty = " << Mvec.empty() << std::endl;

    //-------------------------------------------------------------------//
    
    // std::vector<int> myvector(5);  // 5 default-constructed ints

    // int i = 0;

    // std::vector<int>::reverse_iterator rit = myvector.rbegin();
    // std::vector<int>::reverse_iterator rite = myvector.rend();

    // for (; rit != myvector.rend(); ++rit)
    //     *rit = ++i;
    // --rite;
    // std::cout << "rend = " << *rite << std::endl;

    // std::cout << "myvector contains:";
    
    // for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
    //     std::cout << ' ' << *it;
    
    // std::cout << '\n';


    ft::vector<int> vec(5, 4);  // 5 default-constructed ints

    //int i = 0;

    ft::vector<int>::reverse_iterator Mrit = vec.rbegin();

    std::cout << *Mrit << std::endl;
    ++Mrit;
    std::cout << *Mrit << std::endl;
    // ft::vector<int>::reverse_iterator Mrite = vec.rend();

    // for (; Mrit != vec.rend(); ++Mrit)
    //     *Mrit = ++i;
    // --Mrite;
    
    //std::cout << "rend = " << *Mrite << std::endl;

    // std::cout << "vec contains:";
    
    // for (ft::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    //     std::cout << ' ' << *it;
    
    // std::cout << '\n';
    return (0);
}