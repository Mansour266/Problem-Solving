/*
 * This is solution to problem 149A in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/149/A
 * Author: Mansour
 * Last modified : 30/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_149() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int k,final{0}; cin >> k;

    multiset<int> st;

    for(int i{0};i < 12;++i){
        int temp; cin >> temp;
        st.insert(temp);
    }
    auto it = st.end();
    it--;

    if(k != 0) {
        for (int i{0}; i < 12; ++i) {
            if (k <= 0) {
                break;
            }
            k -= *it;
            it--;
            ++final;

        }
    }

    if(k > 0)
        cout << "-1\n";
    else
        cout << final << '\n';
}
