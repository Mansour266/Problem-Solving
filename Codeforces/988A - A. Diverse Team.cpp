/*
 * This is solution to problem 988A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/988/A
 * Author: Mansour
 * Last modified : 21/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_988(){
    set<int> st; vector<int> index;

    int n, rq_size; cin >> n >> rq_size;

    for (int i{0}; i < n;++i){
        int temp; cin >> temp;
        if(st.find(temp) == st.end()){
            st.insert(temp);
            index.push_back(i);
        }
        if(index.size() == rq_size) break;
    }

    if(index.size() < rq_size) cout << "NO\n";
    else{
        cout << "YES\n";
        for(int i {0}; i < index.size();++i){
            cout << index[i] + 1 << " ";
        }
        cout << "\n";
    }
}