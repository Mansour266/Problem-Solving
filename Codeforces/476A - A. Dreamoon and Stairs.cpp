/*
 * This is solution to problem 476A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/476/A
 * Author: Mansour
 * Last modified : 2/6/2022
 */

#include <iostream>

void solution_a_476() {
    long int n, m, result;
    std::cin >> n >> m;

    if(n < m)
        std::cout << "-1";
    else{
        if(n % 2 == 0)
            result = n / 2;
        else
            result = (n / 2) + 1;
        while (result % m != 0)
            result++;
        std::cout << result;
    }

}