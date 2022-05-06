/*
 * This is solution to problem 231A in Code force in C++
 * Author: Mansour
 * Last modified : 5/5/2022
 * */

#include <iostream>

int solution(){
    int n;
    std::cin >> n;
    if(n >= 1 && n <= 1000){
        int count{0}; // To be incremented then reset after each question
        for (int i {0}; i < n; ++i){
            int opinion1, opinion2,opinion3;// temp value to store all 3 players opinions
            std::cin >> opinion1 >> opinion2 >> opinion3;
            int result {opinion1 + opinion2 + opinion3};
            if(result >= 2 && result <= 3){
                count++;
            }
        }
        std::cout << count;
    }
}