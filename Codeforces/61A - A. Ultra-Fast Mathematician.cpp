/*
 * This is solution to problem 61A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/61/A
 * Author: Mansour
 * Last modified : 3/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_61(){
    cin.tie(0), ios::sync_with_stdio(0);

    string first, second, result{""};
    cin >> first >> second;
    for(int i {0}; i < first.length(); ++i){
        if(first[i] != second[i])
            result += '1';
        else
            result += '0';
    }
    cout << result << '\n';
}