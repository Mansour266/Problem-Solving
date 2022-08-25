/*
 * This is solution to problem 133A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/133/A
 * Author: Mansour
 * Last modified : 25/8/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_133(){
    string word;
    cin >> word;
    bool flag{false};
    for(int i {0}; i < word.length();++i){
        if(word[i] == 'H' || word[i] =='Q' || word[i] == '9')
            flag = true;
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
}