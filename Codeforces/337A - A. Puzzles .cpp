/*
 * This is solution to problem 337A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/337/A
 * Author: Mansour
 * Last modified : 26/5/2022
 */

#include <iostream>
#include <vector>
#include <algorithm>

void solution_a_337(){
    int students_no, gifts_no;
    std::cin >> students_no >> gifts_no;

    std::vector<int> gifts;

    //This should take all gift values and store them in vector called "gifts"
    for(int i {0}; i < gifts_no; ++i){
        int temp_gift;
        std::cin >> temp_gift;
        gifts.push_back(temp_gift);
    }

    sort(gifts.begin(), gifts.end());
     int min{gifts[students_no - 1] - gifts[0]};
    for(int i {1}; i <= gifts_no - students_no; ++i){
        if( (gifts[i + students_no - 1] - gifts[i]) < min)
            min = gifts[i + students_no - 1] - gifts[i];
    }
    std::cout << abs(min);
}