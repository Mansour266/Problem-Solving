/*
 * This is solution to problem 159A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/59/A
 * Author: Mansour
 * Last modified : 25/8/2022
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    string word;
    cin >> word;
    int lower{0}, upper{0};
    for(int i {0}; i < word.length(); ++i){
        if(word[i] >= 'a' && word[i] <= 'z')
            lower++;
        else
            upper++;
    }
    if(upper > lower){
        transform(word.begin(), word.end(), word.begin(), ::toupper);
    }
    else
        transform(word.begin(), word.end(), word.begin(), ::tolower);
    cout << word;
}