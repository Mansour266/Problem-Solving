/*
 * This is solution to problem 141A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/141/A
 * Author: Mansour
 * Last modified : 14/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

void solution_a_141(){
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(0);

    string main,temp,final;
    cin >> main >> temp >> final;

    main += temp;

    sort(main.begin(), main.end());
    sort(final.begin(), final.end());

    if(main == final)
        cout << "YES\n";
    else
        cout << "NO\n";
}
