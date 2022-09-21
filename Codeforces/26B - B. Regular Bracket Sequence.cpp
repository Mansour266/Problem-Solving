/*
 * This is solution to problem 26B in Code force in C++
 * Link: https://codeforces.com/problemset/problem/26/B
 * Author: Mansour
 * Last modified : 21/9/2022
 */

#include <bits/stdc++.h>

using namespace std;


void solution_b_26(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    string str; cin >> str;

    int count{0}, total = str.length();
    for(int i {0}; i < str.length();++i){
            if(str[i] == '(') count++;
            else if(str[i] == ')') count--;
            if(count < 0){
                total--;
                count = 0;
            }
    }
    cout << total - count << '\n'; // I got this from a hint
}