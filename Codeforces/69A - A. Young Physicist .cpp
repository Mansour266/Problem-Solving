/*
 * This is solution to problem 69A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/69/A
 * Author: Mansour
 * Last modified : 19/5/2022
 * */

#include <iostream>

void solution_a_69(){
    //Define the final values for all coordinated
    int x_final{0}, y_final{0}, z_final{0}, n;// n here stands for number of inputs

    //Define temporary values taken
    int x, y, z;

    std:: cin >> n;

    if(n <= 100 && n >= 1){// To satisfy the constraints
        //Make a loop to take all inputs
        for(int i {0}; i < n; ++i) {
            std::cin >> x >> y >> z;
            if (x <= 100 && x >= -100 && y <= 100 && y >= -100 && z <= 100 && z >= -100) {// To satisfy the constraints
                x_final += x;
                y_final += y;
                z_final += z;
            }
        }

        //Now check if the equilibrium is satisfied or not
        if(x_final == 0 && y_final == 0 && z_final == 0)
            std::cout << "YES";
        else
            std::cout << "NO";
    }
}