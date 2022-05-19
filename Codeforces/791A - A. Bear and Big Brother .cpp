/*
 * This is solution to problem 791A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/791/A
 * Author: Mansour
 * Last modified : 19/5/2022
 * */

#include <iostream>

void soltution_a_791(){
    int weight_L, weight_B, years{0};
    std::cin >> weight_L >> weight_B;

    if(weight_L <= 10 && weight_L >= 0 && weight_B <= 10 && weight_B >= 0) {// To satisfy the constraints
        while (true){
            if(weight_L > weight_B)
                break;
            weight_L *= 3, weight_B *= 2;//This should update the data
            years++;
        }

        std::cout << years;
    }
}