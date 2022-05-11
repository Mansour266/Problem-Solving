/*
 * This is solution to problem 263A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/263/A
 * Author: Mansour
 * Last modified : 11/5/2022
 * */

#include <iostream>

void solution_a_263(){
    int matrix[5][5];//The main matrix that we will be working on
    int target_row, target_column;//This should store the index of the number "1"
    int counter; // To count the number of moves needed to make the "1" in the middle of the matrix (lucky)
    for(int i {0}; i < 5;++i){
        for(int j{0}; j < 5;++j){
            std::cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                target_row = i, target_column = j;
            }
        }
    }
    /*This should calculate the distance between number "1" and the center of the matrix in both rows and columns*/
   counter = abs(target_row - 2) + abs(target_column - 2);
    std::cout << counter;
}