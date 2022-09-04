/*
 * This is solution to problem 200B in Code force in C++
 * Link: https://codeforces.com/problemset/problem/200/B
 * Author: Mansour
 * Last modified : 4/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_b_200(){
    cin.tie(0), ios::sync_with_stdio(0);

    int n;
    long long total{0};
    cin >> n;

    for(int i {0}; i < n; ++i){
        int temp;
        cin >> temp;
        total += temp;
    }
    cout << setprecision(13) << total / double (n) << '\n';


}