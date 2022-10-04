/*
 * This is solution to problem 894A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/894/A
 * Author: Mansour
 * Last modified : 3/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_225() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n,x; cin >> n >> x;

    bool flag{true};

    for(int i{0};i < n;++i){
        int a,b; cin >> a >> b;
        if(x == a || x == b || x == 7 - a || x == 7 - b)
            flag = false;
    }

    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}