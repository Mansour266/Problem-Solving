/*
 * This is solution to problem 439A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/439/A
 * Author: Mansour
 * Last modified : 3/6/2022
 */

#include <iostream>

void solution_a_462(){
    int n;
    std::cin >> n;

    char matrix[n][n];
    bool even{true};
    //Store all the data of the matrix
    for(int i {0}; i < n; ++i){
        for(int k {0}; k < n; ++k){
            std::cin >> matrix[i][k];
        }
    }

    //operations on matrix

    for(int i {0}; i < n; ++i){
        int count{0};
        for(int k {0}; k < n; ++k){
            if(i - 1 >= 0 && matrix[i - 1][k] == 'o')
                count++;
            if(k - 1 >= 0 && matrix[i][k - 1] == 'o')
                count++;
            if(i + 1 < n && matrix[i + 1][k] == 'o')
                count++;
            if(k + 1 < n && matrix[i][k + 1] == 'o')
                count++;
            if(count % 2 != 0)
                even = false;
        }
    }
    if(even)
        std::cout << "YES";
    else
        std::cout << "NO";
}