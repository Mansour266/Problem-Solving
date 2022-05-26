/*
 * This is solution to problem 451A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/451/A
 * Author: Mansour
 * Last modified : 24/5/2022
 */

#include <iostream>

int main(){
    int n , m;
    std::cin >> n >> m;

    int result;
/*
 * Why the hell did we do this, no idea.
 */
    if(n > m)
        result = m;
    else
        result = n;


    if(result % 2 == 0)
        std::cout << "Malvika";
    else
        std::cout << "Akshat";
}