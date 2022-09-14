/*
 * This is solution to problem 151A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/151/A
 * Author: Mansour
 * Last modified : 14/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_151(){
    cin.tie(0),cout.tie(0), ios::sync_with_stdio(0);

    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int m_total{k * l}, toasts{m_total / nl}, limes{c * d}, salt{p / np};

    int final = min(toasts, min(limes, salt));

    cout << final / n << '\n';
}