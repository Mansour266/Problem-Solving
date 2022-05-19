/*
 * This is solution to problem 96A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/96/A
 * Author: Mansour
 * Last modified : 19/5/2022
 * */

#include <iostream>

void solution_a_96(){
    //Defining constants

    std::string positions;

    int counter{0};
    bool dangerous{false};

    //Task positions of players as input
    std::cin >> positions;
    if(positions.length() <= 100) {// To satisfy the constraints

        char one_team{'1'};//This should handle the characters of repeated sequence

        for(int i {0}; i < positions.length(); ++i){
            if(positions[i] == one_team){//This should check if the character is repeated
                counter++;//This should count how many times the same character is repeated
                if(counter == 7)//Flag condition to determine if dangerous condition is satisfied
                    dangerous = true;
            }
            else if(positions[i] != one_team){
                //switch the character to satisfy the condition before
                if(one_team == '0')
                    one_team = '1';
                else
                    one_team = '0';
                /*//Reset the counter (is equal to 1 as the character existed once before switching and entering the loop again)
                 * to count the new character
                 * */
                counter = 1;
            }
        }
        if(dangerous)
            std::cout << "YES";
        else
            std::cout << "NO";
    }
}