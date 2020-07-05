#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int n;
    std::cin >> n;
    
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int to_save;
        cin >> to_save;
        if(!to_save);
        else if(to_save <= 10)
        {
            count++;
        }
        else if(to_save > 10)
        {
            count += to_save/10;
            if(to_save%10 > 0)
                count++;
        }
    }
    std::cout << count;
}