/*
 * This is solution to problem 118A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/118/A
 * Author: Mansour
 * Last modified : 15/5/2022
 * */

#include <iostream>
#include <algorithm>//To erase vowels and lowercase letters

void solution_a_118(){
    std::string text;
    char vowels[6]{'a','o', 'u', 'y', 'e', 'i'};
    std::cin >> text;
    if(text.length() <= 100){//Just to satisfy the constraints

        //Now convert all the string to lowercase
        std::transform(text.begin(), text.end(), text.begin(), ::tolower);

        //loop to remove all the vowels from the text
        for(int i {0}; i < 6;++i) {
            text.erase(std::remove(text.begin(), text.end(), vowels[i]), text.end());
        }

        //print the string in the required format.
        for(int i {0}; i < text.length();++i){
            std::cout << "." << text[i];
        }
    }


}