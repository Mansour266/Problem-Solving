/*
 * This is solution to problem 339A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/339/A
 * Author: Mansour
 * Last modified : 11/5/2022
 * */

#include <iostream>
#include <algorithm>

void solution_a_339() {
    std::string equation;
    std::cin >> equation;
    if (equation.length() == 1) {
        std::cout << equation;
    } else if (equation.length() <= 100) {
        int numbers[50]; // This should handle the numbers used in the equation to be sorted later
        int count{0};// This should handle the index of the array
        for (int i{0}; i < equation.length(); ++i) {
            if (equation[i] == '+') {
                continue;
            } else {
                numbers[count++] = equation[i] - '0';
            }
        }
        std::sort(numbers, numbers + count);
        for (int i{0}; i < count; ++i) {
            std::cout << numbers[i];
            if (i == count - 1)
                break;
            std::cout << '+';
        }
    }
}