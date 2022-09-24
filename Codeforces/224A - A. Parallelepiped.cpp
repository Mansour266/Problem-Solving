/*
 * This is solution to problem 224A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/224/A
 * Author: Mansour
 * Last modified : 24/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_224() {
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    int x,y,z; cin >> x >> y >> z;

    double a{sqrt((x * z) / y)}, b{sqrt((x * y) / z)}, c{sqrt((y * z) / x)};
    cout << 4 * (a + b + c) << "\n";
}