/*
 * This is solution to problem 230A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/230/A
 * Author: Mansour
 * Last modified : 2/6/2022
 */

#include <iostream>
#include <algorithm>



void solution_a_230(){
    int dragons_no, strength;


    bool win{true};

    std::cin >> strength >> dragons_no;
    std::pair<int, int> dragons[1000];

    //Take all dragon strength with their bonuses and store them
    for(int i {0}; i < dragons_no; ++i) {
        std::cin >> dragons[i].first >> dragons[i].second;
    }

    std::sort(dragons, dragons + dragons_no);
    for(int i {0}; i < dragons_no; ++i) {

        //Check if the conditions apply
        if (strength > dragons[i].first) {
            strength += dragons[i].second;
        } else {
            win = false;
            break;
        }
    }

    if(win)
        std::cout << "YES";
    else
        std::cout << "NO";
}

//Not yet solved