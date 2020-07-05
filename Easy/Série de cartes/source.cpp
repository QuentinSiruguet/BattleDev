#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int n;
    std::cin >> n;
    
    int longest_strike = 1, current_strike = 1, last = 0;
    std::cin >> last;
    
    for(int i = 0; i < n+1 ; i++)
    {
        int card;
        cin >> card;
        if(card == last)
            current_strike++;
        else
            current_strike  = 1;
        
        if(longest_strike < current_strike)
            longest_strike = current_strike;
            
        last = card;
    }
    std::cout << longest_strike;
}