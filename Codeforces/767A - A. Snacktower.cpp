/*
 * This is solution to problem 767A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/767/A
 * Author: Mansour
 * Last modified : 6/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_767() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n; cin >> n;

    int test{n};

    vector<bool> arr (n, false);

    for(int i{0}; i < n;++i){
        int temp; cin >> temp;

        arr[temp] = true;

        if(temp == test){
            while (arr[temp]){
                cout << temp << ' ';
                temp--;
                test--;
            }
        }
        cout << '\n';
    }
}