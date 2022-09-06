/*
 * This is solution to problem 116A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/116/A
 * Author: Mansour
 * Last modified : 6/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_116(){
    cin.tie(), ios::sync_with_stdio(0);
    int n, result{0}, final{0};
    cin >> n;
    for(int i {0}; i < n; ++i){
       int temp1, temp2;
       cin >> temp1 >> temp2;
       result += temp2 - temp1;
       if(result > final)
           final = result;
    }
    cout << final;
}