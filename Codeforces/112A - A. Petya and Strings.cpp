/*
 * This is solution to problem 112A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/112/A
 * Author: Mansour
 * Last modified : 9/5/2022
 * */

#include <iostream>
#include <algorithm>// For converting the strings to lowercase
void solution_a_112(){
    std::string first_letters, second_letters;
    std::cin >> first_letters >> second_letters;
    //Now convert both strings to be lowercase both
    std::transform(first_letters.begin(), first_letters.end(), first_letters.begin(), ::tolower);
    std::transform(second_letters.begin(), second_letters.end(), second_letters.begin(), ::tolower);
    //Let's begin test cases
    if(first_letters < second_letters)
        std::cout << "-1";

    else if(first_letters > second_letters)
        std::cout << "1";

    else if(first_letters == second_letters)
        std::cout << "0";
}