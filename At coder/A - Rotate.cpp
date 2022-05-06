/*
 * This is solution for problem A - Horizon
 * Link to problem : https://atcoder.jp/contests/abc235/tasks/abc235_a
 * Author: Mansour
 * Last edited:6/5/2022
 */

#include <iostream>
#include <string>

int main(){
    std::string number;
    std::cin >> number;
    std::string temp_number1{number[0]}, temp_number2{number[1]}, temp_number3{number[2]};
    std::string number1 {temp_number1 + temp_number2 + temp_number3}, number2 {temp_number2 + temp_number3 + temp_number1},
            number3{temp_number3 + temp_number1 + temp_number2};
    std::cout << std::stoi(number1) + std::stoi(number2) + std::stoi(number3);
}