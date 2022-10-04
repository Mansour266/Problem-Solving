/*
 * This is solution to problem 1473A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/1473/A
 * Author: Mansour
 * Last modified : 4/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_1473() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int t; cin >> t;

    while(t--){

        int n,d; cin >> n >> d;

        deque<int> no(n);

        bool flag{false};

        for(int i{0};i < n;++i){
            cin >> no[i];
        }

        sort(no.begin(), no.end());

        for(int i{1};i < n;++i){
            if(no[i - 1] + no[i] <= d){
                flag = true;
                break;
            }
        }

        if(flag || no[n - 1] <= d)
            cout << "YES\n";
        else
            cout << "NO\n";

    }


}