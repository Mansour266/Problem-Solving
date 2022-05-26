/*
 * This is solution to problem 208A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/208/A
 * Author: Mansour
 * Last modified : 26/5/2022
 */

#include <iostream>
#include <string>

void solution_a_208(){
    std::string song, original;
    std::cin >> song;

    for(int i {0}; i < song.length(); ++i){
        if(song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
            i += 2;
            //This should add space after first character or word to separate them.
            if(i > 2)
                std::cout << " ";
        }
        else
            std::cout << song[i];
    }

    std::cout << original;
}