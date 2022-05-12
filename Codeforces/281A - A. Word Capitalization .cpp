/*
 * This is solution to problem 281A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/281/A
 * Author: Mansour
 * Last modified : 12/5/2022
 * */

#include <iostream>

void solution_a_281(){
    std::string word;
    std::cin >> word;
    if(word.length() <= 1000){
        word[0] = toupper(word[0]);
    }
    std::cout << word;
}