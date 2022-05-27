/*
 * This is solution to problem 58A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/58/A
 * Author: Mansour
 * Last modified : 27/5/2022
 */

#include <iostream>
#include <string>


void solution_a_58(){
    std::string text, hello{"hello"};
    std::cin >> text;

    int count{0}, k{0};
    for(int i {0}; i < text.length();++i){
        if(text[i] == hello[k]) {
            count++;
            k++;
        }
    }
    if(count == 5)
        std::cout << "YES";
    else
        std::cout << "NO";
}