/*
 * This is solution to problem 282A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/282/A
 * Author: Mansour
 * Last modified : 9/5/2022
 * */

#include <iostream>

void solution_a_282(){
    int n,x{0};// N is the number of operations and X is the variable that operations are done on
    std::string operation;//This should handle whether the operation is ++ or --
    std::cin >> n;
    if(n >= 1 && n <= 150) {//Check the constraints
        for (int i{0}; i < n; ++i) {
        std::cin >> operation;
        if(operation[1] == '+')
            x++;
        else if(operation[1] == '-')
            x--;
        }
        std::cout << x;
    }
}
