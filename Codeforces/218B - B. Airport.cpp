/*
 * This is solution to problem 218B in Codeforces in C++
 * Link: https://codeforces.com/problemset/problem/218/B
 * Author: Mansour
 * Last modified : 3/10/2022
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(nullptr), cout.tie(nullptr), ios::sync_with_stdio(false);

    int n, m, total{0}; cin >> n >> m;

    deque<int> dq1,dq2;

    for(int i{0}; i < m;++i){
        int temp; cin >> temp;
        total += temp;
        dq1.push_back(temp);

    }

    sort(dq1.begin(), dq1.end());
    dq2 = dq1;

    int max{0},min{0};
    if(total == n){
        while(!dq1.empty()){
            min += dq1[0];
            dq1[0]--;
            if(dq1[0] == 0)
                dq1.pop_front();
        }
        max = min;
    }

    else{
        //Find minimum here (will use dq1 to find minimum and dq2 to find maximum)
        int i{n};
        while(i){
            if(dq1[0] == 0){
                dq1.pop_front();
            }

            min += dq1[0];
            dq1[0]--;

            --i;
        }

        //Find maximum here
        i = n;
        while (i){
            if(dq2[0] == 0)
                dq2.pop_front();

            max += dq2[dq2.size() - 1];
            dq2[dq2.size() - 1]--;
            sort(dq2.begin(), dq2.end());

            --i;
        }
    }
    cout << max  << ' ' << min << '\n';
}
