/*
 * This is solution to problem 233A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/233/A
 * Author: Mansour
 * Last modified : 3/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_233(){
    cin.tie(0), ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if(n % 2 != 0)//Check if it is odd
        cout << "-1";
    else{
        cout <<"2 1";
        for(int i {3}; i < n; i += 2){
            cout << " " << i + 1 << " " << i;
        }
    }
    cout << "\n";
}
//Not fully satisfied with this solution