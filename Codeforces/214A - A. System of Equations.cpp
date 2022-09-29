/*
 * This is solution to problem 214A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/214/A
 * Author: Mansour
 * Last modified : 29/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_214() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n,m,total{0}; cin >> n >> m;

    for(int i{0}; i * i <= n && i <= m;++i){
        int b = n - (i * i);
        if((b * b) + i == m)
            total++;
    }

    cout << total << '\n';
}