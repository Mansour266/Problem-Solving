/*
 * This is solution to problem 1511C in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/1511/C
 * Author: Mansour
 * Last modified : 9/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_c_1511() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n,m; cin >> n >> m;

    deque<int> arr(n);

    for(int i{0}; i < n;++i){
        cin >> arr[i];
    }
    for(int i{0}; i < m;++i){
        int temp; cin >> temp;
        for(int k{0}; k < n;++k){
            if(temp == arr[k]){
                cout << k + 1 << ' ';
                arr.push_front(arr[k]);
                arr.erase(arr.begin() + k + 1);
                break;
            }
        }
    }
}