/*
 * This is solution to problem 466A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/466/A
 * Author: Mansour
 * Last modified : 31/5/2022
 */

#include <iostream>
#include <algorithm>

int main(){
     int n, m, a, b;

    std::cin >> n >> m >> a >> b;

    int total_one_ride_cost{a * n};//This should calculate the total cost of one ride tickets

    //This should calculate total cost of "m" ride tickets and add the remainder of cost of one ride tickets
    int total_m_ride_cost{(n / m) * b + std::min((n % m)* a, b)};

    if(total_one_ride_cost < total_m_ride_cost)
        std::cout << total_one_ride_cost;
    else
        std::cout << total_m_ride_cost;

}