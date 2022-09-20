/*
 * This is solution to problem 637B in Code force in C++
 * Link: https://codeforces.com/problemset/problem/637/B
 * Author: Mansour
 * Last modified : 20/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_b_637(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);

    stack<string> stk; set<string> st;

    int n; cin >> n;

    while(n--){
        string temp; cin >> temp;
        stk.push(temp);
    }

    while (!stk.empty()){
        string word = stk.top();
        stk.pop();
        if(st.find(word) == st.end()){
            cout << word << '\n';
            st.insert(word);
        }
    }




}

