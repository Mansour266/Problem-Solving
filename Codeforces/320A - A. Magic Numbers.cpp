/*
 * This is solution to problem 320A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/320/A
 * Author: Mansour
 * Last modified : 27/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_320() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    string number; cin >> number;
    bool flag{true};
    for(int i{0}; i < number.length();++i) {
        if (number[i] == '1' && number[i + 1] == '4' && number[i + 2] == '4') {
            i += 2;
            continue;
        }
        else if(number[i] == '1' && number[i + 1] == '4') {
            i++;
            continue;
        }
        else if(number[i] == '1') continue;
        else
            flag = false;
    }
    if(flag)
        cout << "YES\n";
    else
        cout << "NO\n";

}