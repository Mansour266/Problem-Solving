/*
 * This is solution to problem 1214C in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/1214/C
 * Author: Mansour
 * Last modified : 10/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_c_1214(){
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n; cin >> n;
    string s; cin >> s;

    int k{0},mini{0};
    for(int i{0}; i < n;++i){
        if(s[i] == '(')
            ++k;
        else
            --k;

        mini = min(k, mini);
    }
    if(k == 0 && mini >= -1)
        cout << "Yes\n";
    else
        cout << "No\n";

}