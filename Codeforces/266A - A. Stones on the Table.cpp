/*
 * This is solution to problem 266 in Code force in C++
 * Link: https://codeforces.com/problemset/problem/266/A
 * Author: Mansour
 * Last modified : 2/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_266(){
    cin.tie(0), ios::sync_with_stdio(0);
    int stones, count{0};
    string line;
    cin >> stones >> line;
    for(int i {0}; i < stones - 1; ++i){
        if(line[i] == line[i + 1])
            count++;
    }
    cout << count;
}