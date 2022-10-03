/*
 * This is solution to problem 894A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/894/A
 * Author: Mansour
 * Last modified : 3/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_894() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    string str; cin >> str;

    int final{0};

    for(int i{0};i < str.length();++i){

        int q_right{0}, q_left{0};

        if(str[i] == 'A'){

            for(int j{0};j < i;++j)
                q_left += str[j] == 'Q';

            for(int j{i + 1}; j < str.length();++j)
                q_right += str[j] == 'Q';
        }

        final += (q_left * q_right);
    }
    cout << final << '\n';
}
