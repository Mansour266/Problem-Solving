/*
 * This is solution to problem 43A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/43/A
 * Author: Mansour
 * Last modified : 28/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_43(){
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n; cin >> n;
    int s1{1},s2{0};
    string t1,t2; cin >> t1;
    for(int i{0}; i < n - 1;++i){
        string temp; cin >> temp;
        if(temp == t1)
            s1++;
        else {
            t2 = temp;
            s2++;
        }
    }
    if(s1 > s2)
        cout << t1 << '\n';
    else
        cout << t2 << '\n';
}