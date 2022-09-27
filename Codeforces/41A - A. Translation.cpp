/*
 * This is solution to problem 41A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/41/A
 * Author: Mansour
 * Last modified : 27/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_41(){
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    string s1,s2; cin >> s1 >> s2;
    reverse(s1.begin(), s1.end());
    if(s1 == s2)
        cout << "YES\n";
    else
        cout << "NO\n";

}