    /*
     * This is solution to problem 34A in Codeforces in C++
     * Link: https://codeforces.com/problemset/problem/34/A
     * Author: Mansour
     * Last modified : 29/9/2022
     */

    #include <bits/stdc++.h>

    using namespace std;

void solution_b_34() {
        cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

        int n,m, total{0}; cin >> n >> m;

        multiset<int> st;

        for(int i{0};i < n;++i){
            int temp; cin >> temp;
            st.insert(temp);
        }

        for(int i{0};i < m;++i){
            auto it = st.begin();
            if(*it > 0) break;
            total += abs(*it);
            st.erase(it);
        }

        cout << total <<'\n';
    }