#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int n;
    std::cin >> n;
    
    bool red = false, blue = false, yellow = false, black = false, white = false;
    
    for(int i = 0; i < n; i++)
    {
        int color;
        std::cin >> color;
        if(color%2 == 0)
            red = true;
        if(color%3 == 0)
            blue = true;
        if(color%5 == 0)
            yellow = true;
        if(color%7 == 0)
            black = true;
        if(color%11 == 0)
            white = true;
    }
    
    if(red)
        std::cout << "2 ";
    if(blue)
        std::cout << "3 ";
    if(yellow)
        std::cout << "5 ";
    if(black)
        std::cout << "7 ";
    if(white)
        std::cout << "11 ";
}