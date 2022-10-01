/*
 * This is solution to problem 118B in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/118/B
 * Author: Mansour
 * Last modified : 1/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_b_118() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);
    int n; cin >> n;

    //Upper half
    for(int i{0}; i <= n;++i){
        for(int j{n}; j >i;--j)
            cout << "  ";
        for(int j{0}; j < i; ++j)
            cout << j << ' ';

        for(int j{i};j >= 0;--j) {
            if (j > 0)
                cout << j << ' ';
            else
                cout << j;
        }

        cout << '\n';
    }
    //lower half
    for(int i{n - 1}; i >= 0;--i){
        for(int j{n}; j > i;--j)
            cout << "  ";
        for(int j{0}; j < i; ++j)
            cout << j << ' ';

        for(int j{i};j >= 0;--j) {
            if (j > 0)
                cout << j << ' ';
            else
                cout << j;
        }
        cout << '\n';
    }
}