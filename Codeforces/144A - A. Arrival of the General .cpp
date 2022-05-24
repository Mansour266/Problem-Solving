/*
 * This is solution to problem 144A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/144/A
 * Author: Mansour
 * Last modified : 23/5/2022
 */

#include <iostream>

int main(){
    int soldiers_no;

    std::cin >> soldiers_no;

    int max {0}, max_index{0} , min{1000}, min_index{0};

    //This should take all soldiers heights and store them in the array
    for(int i {0}; i < soldiers_no; ++i){
        int soldiers_height;
        std::cin >> soldiers_height;
        if(soldiers_height > max) {
            max = soldiers_height;
            max_index = i;
        }
        if(soldiers_height <= min) {
            min = soldiers_height;
            min_index = i;
        }
    }
    if(max_index > min_index)
        std::cout << (max_index - 1) + (soldiers_no - min_index) - 1;
    else
        std::cout << (max_index - 1) + (soldiers_no - min_index);
}