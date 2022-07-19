/*
 * This is solution to problem 110A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/110/A
 * Author: Mansour
 * Last modified : 19/7/2022
 */

#include <bits/stdc++.h>

void solution_a_110(){
    std::string no;
    std::cin >> no;
    int count{0};
    for(int i {0}; i < no.length();++i){
        if(no[i] != '4' && no[i] != '7'){
            continue;
        }
        else {
            count++;
        }
    }
    if((count == 4 || count == 7) && no.length() > 1)
        std::cout << "YES";
    else
        std::cout << "NO";
}