/*
 * This is solution to problem 80A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/81/A
 * Author: Mansour
 * Last modified : 2/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

bool is_prime(int k){
    for (int i{2}; i <= k/2 ; ++i) {
        if (k % i == 0) {
            return false;
        }
    }
    return true;

}
void solution_a_80(){
    cin.tie(0), ios::sync_with_stdio(0);

    int n,m, np;
    cin >> n >> m;

    np = n + 1;

    while(!is_prime(np)) {
        np++;
    }
    if(np == m) cout << "YES";
    else cout << "NO";
}