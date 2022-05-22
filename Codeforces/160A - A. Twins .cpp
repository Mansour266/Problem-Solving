/*
 * This is solution to problem 160A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/160/A
 * Author: Mansour
 * Last modified : 22/5/2022
 */

#include <iostream>
#include <vector>//To store the coin values
#include <algorithm> // To sort coin values

void solution_a_160(){

    int coins_number, total_sum{0};

    std::cin >> coins_number;

    std::vector<int> coins;

    //This loop should store the coin values in a vector and calculate the sum of it's values
    for(int i {0}; i < coins_number; ++i){
        int temp_coins;
        std::cin >> temp_coins;
        coins.push_back(temp_coins);
        total_sum += temp_coins;
    }
    //Sort the vector to begin with the coins with the largest value
    std::sort(coins.begin(), coins.end());
    //Now loop through all values of coins to calculate the least number of coins to be taken
    int temp_sum{0}, least_coins{1};
    for(int i {coins_number - 1}; i >= 0; --i){
        temp_sum += coins[i];
        total_sum -= coins[i];
        if(temp_sum <= total_sum)
            least_coins++;
    }

    std::cout << least_coins;
}

