/*
 * This is solution to problem 219A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/219/A
 * Author: Mansour
 * Last modified : 1/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_219(){
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int k,count{0}; cin >> k;
    string str; cin >> str;

    char temp;

    sort(str.begin(), str.end());
    for(int i{0};i < str.length();++i){
        if(i % k == 0)
            temp = str[i];
        if(str[i] == temp)
            count++;
    }

    if(count == str.length() && count % k == 0){
        for(int i{0};i < k;++i){
            for(int j{0};j < str.length();j += k){
                cout << str[j];
            }
        }
        cout << '\n';
    }
    else
        cout << "-1\n";
}
