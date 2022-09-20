/*
 * This is solution to problem 1452C in Code force in C++
 * Link: https://codeforces.com/problemset/problem/1452/C
 * Author: Mansour
 * Last modified : 20/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_c_1452(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    int n; cin >> n;

    while(n--){
        string temp; cin >> temp;
        int curly{0}, square{0}, total{0};

        for(char i : temp){
            if(i == '(') ++curly;
            if(i == '[') ++square;
            if(i == ')')
                if(curly)
                    ++total, --curly;

            if(i == ']')
                if(square)
                    ++total, --square;
        }
        cout << total << '\n';
    }
}