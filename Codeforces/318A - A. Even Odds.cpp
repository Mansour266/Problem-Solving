/*
 * This is solution to problem 318A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/318/A
 * Author: Mansour
 * Last modified : 31/5/2022
 */

#include <iostream>


int main(){
    long long unsigned int n, index;

    std::cin >> n >> index;

    if(index <= (n + 1) / 2)//to check if the index is even number or odd number
        std::cout << index * 2 - 1;
    else
        std::cout << (index - (n + 1) /2) * 2;
}

//Had to get a hint