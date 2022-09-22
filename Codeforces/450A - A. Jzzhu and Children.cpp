/*
 * This is solution to problem 466A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/450/A
 * Author: Mansour
 * Last modified : 22/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_450(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    int n,m,k{0},final; cin >> n >> m;

    vector<pair<int, int>> vec;

    for(int i {0}; i < n;++i){
        int temp; cin >> temp;

        vec.emplace_back(make_pair(temp, i + 1));

    }
    while(vec.size() > k){
        if(vec[k].first > m)
            vec.emplace_back(make_pair(vec[k].first - m, vec[k].second));
        else
            final = vec[k].second;
        ++k;
    }
    cout << final << '\n';
}