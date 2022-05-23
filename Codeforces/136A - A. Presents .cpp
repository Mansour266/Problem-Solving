/*
 * This is solution to problem 136A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/136/A
 * Author: Mansour
 * Last modified : 23/5/2022
 */

#include <iostream>

void solution_a_136(){
    int no_friends, present;

    std::cin >> no_friends;

    int presents[no_friends];
    //This should arrange the presents in order
    for(int i {1}; i < no_friends + 1; ++i){
        std::cin >> present;

        presents[present - 1] = i;

    }

    //This should print the final array with the correct order.
    for(int i {0}; i < no_friends; ++i){
        std::cout << presents[i] << " ";
    }

}