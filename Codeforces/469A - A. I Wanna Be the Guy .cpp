/*
 * This is solution to problem 469A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/469/A
 * Author: Mansour
 * Last modified : 30/5/2022
 */

#include <iostream>
#include <set>

void solution_a_469(){
    unsigned int n, p, q;
    std::set<unsigned int> levels;

    std::cin >> n >> p;
    for(int i {0}; i < p;++i) {
        unsigned int temp_no;
        std::cin >> temp_no;
        levels.insert(temp_no);
    }
    std::cin >> q;
    for(int i{0}; i < q; ++i){
        unsigned int temp_no;
        std::cin >> temp_no;
        levels.insert(temp_no);
    }
    if (levels.size() == n)
        std::cout << "I become the guy.";
    else
        std::cout << "Oh, my keyboard!";
}

//Not yet solved
