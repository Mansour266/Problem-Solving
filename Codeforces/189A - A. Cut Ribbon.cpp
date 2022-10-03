/*
 * This is solution to problem 189A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/189/A
 * Author: Mansour
 * Last modified : 3/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_189() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n,a,b,c; cin >> n >> a >> b >> c;

    int final{0},remaining, temp;
    for(int i{0};i * a <= n;++i){
        for(int k{0}; (k * b) + (a * i) <= n;++k){
            remaining = n - ((i * a) + (k * b));
            if(remaining % c == 0) {
                temp = remaining / c;
                final = max(final, i + k + temp);
            }
        }
    }
    cout << final << '\n';

    //Not completely satisfied with the solution after seeing a hint
}
