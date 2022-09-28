/*
 * This is solution to problem 352A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/352/A
 * Author: Mansour
 * Last modified : 28/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_352() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n; cin >> n;

    int fives{0}, zeros{0};

    for(int i{0};i < n;++i) {
        int temp;
        cin >> temp;
        if (temp == 5) fives++;
        else zeros++;
    }
    //This part was written with a hint
    if((fives / 9) == 0){
        if(zeros)
            cout << "0\n";
        else
            cout << "-1\n";
    }
    else{
        if(zeros){
            for(int i{0}; i < 9 * (fives / 9);++i)
                cout << "5";
            for(int i{0}; i < zeros;++i)
                cout << "0";
            cout << '\n';
        }
        else
            cout << "-1\n";

    }
}