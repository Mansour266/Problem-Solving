/*
 * This is solution to problem 155A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/155/A
 * Author: Mansour
 * Last modified : 6/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_155(){
    cin.tie(0), ios::sync_with_stdio(0);

    int n, count{0};

    cin >> n;

    int scores[n];

    for(int i{0}; i < n; ++i){
        cin >> scores[i];
    }
    int max{scores[0]}, min{10001};
    for(int i{0}; i < n; ++i){
        if(scores[i] < min){
            count++;
            min = scores[i];
        }
        if(scores[i] > max){
            count++;
            max = scores[i];
        }
    }
    cout << count - 1 << '\n';
}