/*
 * This is solution to problem 339B in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/339/B
 * Author: Mansour
 * Last modified : 27/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_b_339() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);
    int n,m,initial; cin >> n >> m >> initial;
    int total{0};
    while (--m){
        int temp; cin >> temp;
        if(initial > temp)
            total++;
        initial = temp;
    }
    cout << ((long long) n) * ((long long) total) + initial - 1 << '\n'; //This line is written after a hint
}