/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichougra <ichougra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:42:13 by ichougra          #+#    #+#             */
/*   Updated: 2021/11/24 11:48:55 by ichougra         ###   ########.fr       */
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
    std::vector<char> vec(5);
    
    std::cout << "size = " << vec.size() << std::endl;
    std::cout << "max size = " << vec.max_size() << std::endl;

    ft::vector<char> Mvec(5);

    std::cout << "size = " << Mvec.size() << std::endl;
    std::cout << "max size = " << Mvec.max_size() << std::endl;

    return (0);
}