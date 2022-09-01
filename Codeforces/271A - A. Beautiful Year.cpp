/*
 * This is solution to problem 271Ain Code force in C++
 * Link: https://codeforces.com/problemset/problem/271/A
 * Author: Mansour
 * Last modified : 1/9/2022
 */

#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0), ios::sync_with_stdio(0);
    int year;
    cin >> year;
    while(true){
        year++;
        int a{year / 1000},//This should take care of thousandth number
        b{year / 100 % 10},//This should take care of hundredth number
        c{year / 10 % 10},//This should take care of tenth number
        d{year % 10};//This should take care of units number
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            cout << year << '\n';
            break;
        }
    }
}