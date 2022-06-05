/*
 * This is solution to problem 441A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/441/A
 * Author: Mansour
 * Last modified : 4/6/2022
 */

#include <iostream>
#include <bits/stdc++.h>

void solution_a_441(){
    int no_of_seller, cash;
    std::cin >> no_of_seller >> cash;

    std::set<int> items;

    for(int i {0}; i < no_of_seller; ++i){
        int seller_items_no;
        std::cin >> seller_items_no;
        for(int k {0}; k < seller_items_no; ++k){
            int price;
            std::cin >> price;
            if(price < cash){
                items.insert(i + 1);
            }
        }
    }

    std::cout << items.size() << '\n';

    for(auto it = items.begin(); it != items.end(); ++it)
        std::cout << *it << ' ';
}