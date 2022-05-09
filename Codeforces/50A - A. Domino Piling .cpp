/*
 * This is solution to problem 158A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/50/A
 * Author: Mansour
 * Last modified : 9/5/2022
 * */

#include <iostream>

void solution_domino_piling_50A(){
    int m, n, domino_size{2};
    std::cin >> m >> n;
    int result{static_cast<int>((m * n)/domino_size)};
    std::cout << result;

}