/*
 * This is solution to problem 32B in Code force in C++
 * Link: https://codeforces.com/problemset/problem/32/B
 * Author: Mansour
 * Last modified : 29/8/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_b_32(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    string str;
    cin >> str;
    for(int i {0}; i < str.length();++i){
        if(str[i] == '.')
            cout << 0;
        else if(str[i] == '-' && str[i + 1] == '.'){
            cout << 1;
            ++i;
        }
        else if(str[i] == '-' && str[i] == '-'){
            cout << 2;
            ++i;
        }
    }
    cout << '\n';

}