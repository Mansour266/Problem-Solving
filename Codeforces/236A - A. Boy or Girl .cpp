/*
 * This is solution to problem 236A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/236/A
 * Author: Mansour
 * Last modified : 12/5/2022
 * */

#include <iostream>
#include <algorithm>// To sort the letters

void solution_a_236(){

    std::string word;
    std::cin >> word;

    sort(word.begin(), word.end());
    /*
     * Now keep the unique the letters and remove any duplications*/
    word.erase(std::unique(word.begin(), word.end()),word.end());

    if(word.length() % 2 == 0)
        std::cout << "CHAT WITH HER!";
    else
        std::cout << "IGNORE HIM!";
}