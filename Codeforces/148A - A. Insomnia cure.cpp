/*
 * This is solution to problem 148A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/148/A
 * Author: Mansour
 * Last modified : 4/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_148(){
    cin.tie(0), ios::sync_with_stdio(0);

    int k,l,m,n,d,result{0};

    cin >> k >> l >> m >> n >> d;

    for(int i {1}; i <= d; ++i){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            result++;
    }
    cout << result << '\n';
}

//Not satisfied with this solution (solved with a hint)