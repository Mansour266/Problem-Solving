/*
 * This is solution to problem 479A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/479/A
 * Author: Mansour
 * Last modified : 30/5/2022
 */

#include <iostream>

void solution_a_479() {

    unsigned int a, b, c, max{0};

    std::cin >> a >> b >> c;

    if (a + b + c > max)
        max = a + b + c;
    if (a + (b * c) > max)
        max = a + (b * c);
    if (a * (b + c) > max)
        max = a * (b + c);
    if (a * b * c > max)
        max = a * b * c;
    if ((a + b) * c > max)
        max = (a + b) * c;

    std::cout << max;
}