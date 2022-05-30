/*
 * This is solution to problem 443A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/443/A
 * Author: Mansour
 * Last modified : 30/5/2022
 */

#include <iostream>
#include <string>
#include <set>


void solution_a_443(){
    std::string letter_input;

    getline(std::cin, letter_input);// to neglect spaces from input

    std::set<char> letters;//to store the letters in ordered and not repeated
    if(letter_input.length() > 2) {//to solve empty set problem
        for (int i{1}; i < letter_input.length(); i += 3) {
            letters.insert(letter_input[i]);
        }
    }

    std::cout << letters.size();
}