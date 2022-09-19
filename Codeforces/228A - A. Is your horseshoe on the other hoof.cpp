/*
 * This is solution to problem 228A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/228/A
 * Author: Mansour
 * Last modified : 9/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_228() {
    cin.tie(0), ios::sync_with_stdio(0);
    long long int a, b, c, d, count{0};
    cin >> a >> b >> c >> d;
    if (a == b || a == c || a == d) count++;
    if (b == c || b == d) count++;
    if (c == d) count++;

    cout << count << '\n';
}
