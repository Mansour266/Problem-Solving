/*
 * This is solution to problem 227B in Code force in C++
 * Link: https://codeforces.com/problemset/problem/227/B
 * Author: Mansour
 * Last modified : 16/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_b_227(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    int n,m;
    long long front{0}, back{0};

    cin >> n;

    int arr[n];
    for(int i {0}; i < n; ++i){
        int s; cin >> s;

        arr[s] = i;

    }

    cin >> m;
    for(int i{0}; i < m;++i){
        int temp; cin >> temp;

        front += arr[temp] + 1, back += n - arr[temp];

    }
    cout << front  << " " << back  << "\n";
}