/*
 * This is solution to problem 139A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/139/A
 * Author: Mansour
 * Last modified : 24/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_139(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    int n,days{0},arr[7];
    cin >> n;
    for(int i {0}; i < 7;++i){
        cin >> arr[i];
    }
    while(true){
        for(int i{0}; i < 7;++i){
            n -= arr[i];
            days++;
            if(n <= 0) break;
        }
        if(n <= 0) {
            cout << days << "\n";
            break;
        }
        days = 0;

    }
}