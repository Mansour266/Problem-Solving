/*
 * This is solution to problem 165A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/165/A
 * Author: Mansour
 * Last modified : 24/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_165(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    int n; cin >> n;
    int x[n],y[n], points{0};

    for(int i{0};i < n;++i){
        cin >> x[i] >> y[i];
    }

    for(int i{0}; i < n;++i){
        bool right{false}, left{false}, up{false}, down{false};
        for(int j{0}; j < n;++j){
            if(x[j] > x[i] && y[j] == y[i]) right = true;
            if(x[j] < x[i] && y[j] == y[i]) left = true;
            if(x[j] == x[i] && y[j] < y[i]) down = true;
            if(x[j] == x[i] && y[j] > y[i]) up = true;

            if(up && down && right && left) {
                points++;
                break;
            }
        }
    }
    cout << points << '\n';
}
