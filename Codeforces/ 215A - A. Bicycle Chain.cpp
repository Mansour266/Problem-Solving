/*
 * This is solution to problem 215A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/215/A
 * Author: Mansour
 * Last modified : 28/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_215(){
    cin.tie(nullptr),cout.tie(nullptr), ios::sync_with_stdio(false);

    int n,final{0},test{0}; cin >> n;

    int a[n];

    for(int i{0};i < n;++i){
        cin >> a[i];
    }

    int m; cin >> m;

    int b[m];

    for(int i{0};i < m;++i){
        cin >> b[i];
    }

    for(int i{0}; i < n;++i){
        for(int j{0};j < m;++j){
            if(b[j] % a[i] == 0)
                if(b[j] / a[i] == test)
                    ++final;
                else if(b[j] / a[i] > test) {
                    final = 1;
                    test = max(test, b[j] / a[i]);
                }
        }
    }
    cout << final << '\n';
    //Still has a bug
}
