/*
 * This is solution to problem 439A in Code force in C++
 * Link: https://codeforces.com/problemset/problem/439/A
 * Author: Mansour
 * Last modified : 3/6/2022
 */

#include <iostream>

void solution_a_439(){
    int songs_no, duration, song_duration, song_total{0};

    std::cin >> songs_no >> duration;

    for(int i {0}; i < songs_no;++i){
        std::cin >> song_duration;
        song_total += song_duration;
    }

    if(song_total + (songs_no - 1) * 10 > duration)//This condition is a hint
        std::cout << -1;
    else
        std::cout << (duration - song_total) / 5;
}