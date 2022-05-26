/*
 * This is solution to problem 268A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/268/A
 * Author: Mansour
 * Last modified : 26/5/2022
 */

#include <iostream>
#include <vector>

void solution_a_268(){
    int matches_no;
    std::cin >> matches_no;

    std::vector<int> first, second;

    //This should store all the data in two vectors (first and second)
    for(int i {0}; i < matches_no; ++i){
        int temp1, temp2;
        std::cin >> temp1 >> temp2;
        first.push_back(temp1), second.push_back(temp2);
    }

    //This should count the number of tshirt color conflicts
    int count{0};
    for(int i {0}; i < matches_no; ++i){
        for(int k {0}; k < matches_no; ++k){
            if(first[i] == second[k])
                count++;
        }
    }

    std::cout << count;
}