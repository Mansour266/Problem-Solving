/*
 * This is solution to problem 205A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/205/A
 * Author: Mansour
 * Last modified : 26/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_205(){
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n; cin >> n;
    long long temp,test{1000000001};
    int index;

    bool flag{true};

    for(int i{0}; i < n;++i){
        cin >> temp;
        if(test == temp){
            flag = false;
            continue;
        }
        if(test > temp){
            test = temp;
            index = i + 1;
            flag = true;
        }

    }
    if(flag)
        cout << index << '\n';
    else
        cout << "Still Rozdil\n";

}
