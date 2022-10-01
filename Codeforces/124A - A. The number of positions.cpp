/*
 * This is solution to problem 124A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/124/A
 * Author: Mansour
 * Last modified : 1/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_124() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n,a,b; cin >> n >> a >> b;
    cout << min(n - a, b + 1) << '\n';
    //No idea why this works
}
