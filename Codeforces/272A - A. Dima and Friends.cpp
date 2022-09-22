/*
 * This is solution to problem 272A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/272/A
 * Author: Mansour
 * Last modified : 22/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_272() {
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);
    int n, total{0}, final{0};
    cin >> n;


    for(int i {0}; i < n;++i) {
        int temp; cin >> temp;

        total += temp;
    }

    for (int i{1}; i < 6; ++i) {
        if ((total + i) % (n + 1) != 1)
            ++final;
    }
    cout << final << "\n";
}