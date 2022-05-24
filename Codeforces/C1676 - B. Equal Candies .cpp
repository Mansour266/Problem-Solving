/*
 * This is solution to problem B in Contest 1676 in Code force in C++
 * Link: https://codeforces.com/contest/1676/problem/B
 * Author: Mansour
 * Last modified : 24/5/2022
 */

#include <iostream>
#include <vector>//To handle candy distribution
#include <algorithm>//To sort the vector of candies


void solution_c_1676_b(){
    int test_cases;

    std::cin >> test_cases;
    if(test_cases >= 1 && test_cases <= 1000) {//Only to satisfy constraints

        //This should loop until all test cases are done
        for (int i{0}; i < test_cases; ++i) {
            int boxes_no;
            std::vector<int> candies;

            std::cin >> boxes_no;
            if(boxes_no >= 1 && boxes_no <= 50) {//Only to satisfy constraints

                //This should take all candies distribution input
                for (int k{0}; k < boxes_no; ++k) {
                    int temp_candies;
                    std::cin >> temp_candies;
                    candies.push_back(temp_candies);
                }
                sort(candies.begin(), candies.end());

                int eaten_candies{0};

                for (int k{1}; k < boxes_no; ++k) {
                    eaten_candies += candies[k] - candies[0];
                }

                std::cout << eaten_candies << "\n";
            }
        }
    }
}