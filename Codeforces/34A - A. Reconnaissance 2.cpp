/*
 * This is solution to problem 155A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/34/A
 * Author: Mansour
 * Last modified : 24/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_34(){
    cin.tie(0),cout.tie(0),ios::sync_with_stdio(0);
    int n; cin >> n;
    int arr[n];
    for(int i{0}; i < n;++i){
        cin >> arr[i];
    }
    int diff{abs(arr[0] - arr[n - 1])}, m{1001}, index1{1}, index2{n};
    m = min(m, diff);
    for(int i{0}; i < n - 1;++i){
        diff = abs(arr[i] - arr[i + 1]);
        if(m > diff){
            m = diff;
            index1 = i + 1;
            index2 = i + 2;
        }
    }
    cout << index1 << " " << index2 << '\n';

    //Solved with a hint in the part of comparing(second loop)
}
