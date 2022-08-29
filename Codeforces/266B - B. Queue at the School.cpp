/*
 * This is solution to problem 266B in Code force in C++
 * Link: https://codeforces.com/problemset/problem/266/B
 * Author: Mansour
 * Last modified : 29/8/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_b_266(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,time;
    cin >> n >> time;
    string line;
    cin >> line;
    for(int i{0}; i < time;++i){
        for(int k{0}; k < n - 1 ;++k){
            if(line[k] == 'B' && line[k + 1] == 'G'){
                line[k] = 'G';
                line[k+1] = 'B';
                ++k;
            }
        }
    }
    cout << line << '\n';
}