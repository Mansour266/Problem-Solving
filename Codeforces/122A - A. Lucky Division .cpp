/*
 * This is solution to problem 122A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/122/A
 * Author: Mansour
 * Last modified : 23/5/2022
 */

#include <iostream>

void solution_a_122(){
    int lucky_numbers[12]{4,7, 44, 47, 74, 77, 444, 474, 477, 777, 747,
                          744};
    int number;
    bool lucky{false};//Flag for lucky number

    std::cin >> number;

    if(number >= 1 && number <= 1000){ //to satisfy the constraints
        for(int i {0}; i < 12; ++i){
            if(number % lucky_numbers[i] == 0)
                lucky = true;
        }
        if(lucky)
            std::cout << "YES";
        else
            std::cout << "NO";
    }
}