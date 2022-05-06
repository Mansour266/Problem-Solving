/*
 * This is solution for problem A - Horizon
 * Link to problem : https://atcoder.jp/contests/abc239/tasks/abc239_a?lang=en
 * Author: Mansour
 * Last edited:6/5/2022
 */

#include <iostream>
#include <cmath>//For sqrt function
#include <iomanip>//for set precision function

int solution(){
    long double h;
    std::cin >> h;
    if(h >= 1 && h <= 100000){
        std::cout << std::fixed <<std::setprecision(5) << std::sqrt(h * (12800000+ h));
    }
}