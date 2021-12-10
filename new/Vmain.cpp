/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibrahim <ibrahim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 04:33:36 by ibrahim           #+#    #+#             */
/*   Updated: 2021/12/03 05:08:46 by ibrahim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Vector.hpp"
#include <iostream>
#include <vector>

int main()
{
    // constructors used in the same order as described above:
    std::vector<int> first;                                // empty vector of ints
    std::vector<int> second (4,100);                       // four ints with value 100
    std::vector<int> third (second.begin(),second.end());  // iterating through second
    std::vector<int> fourth (third);                       // a copy of third

    // the iterator constructor can also be used to construct from arrays:
    int myints[] = {16,2,77,29};
    std::vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

    std::cout << "The contents of fifth are:";
    for (std::vector<int>::iterator it = fifth.begin(); it != fifth.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    ft::vector<int> mfirst;                                // empty vector of ints
    ft::vector<int> msecond (4,100);                       // four ints with value 100
    ft::vector<int> mthird (msecond.begin(),msecond.end());  // iterating through second
    ft::vector<int> mfourth (mthird);                       // a copy of third

    // the iterator constructor can also be used to construct from arrays:
    int ints[] = {16,2,77,29};
    ft::vector<int> mfifth (ints, ints + sizeof(ints) / sizeof(int) );

    std::cout << "The contents of mfifth are:";
    for (ft::vector<int>::iterator it = mfifth.begin(); it != mfifth.end(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';


    return 0;


}
