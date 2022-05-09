/*
 * This is solution to problem 158A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/158/A
 * Author: Mansour
 * Last modified : 5/5/2022
 * */

#include <iostream>

void solution_a_158(){
    int n,max_score, count{0}; //Count is defined here to count the number of players that exceeded the needed score
    std::cin >> n >> max_score;
    int scores[n];
   for(int i {0}; i < n; ++i){
       std:: cin >> scores[i];
   }
   for(int i {0}; i < n; ++i){
       if(scores[i] >= scores[max_score-1] && scores[i] != 0){
           count++;
       }
   }
   std::cout << count;
}