#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int B1, B2, D1;
    cin >> B1>> B2 >> D1;
    
    for(int i = B1; i <= B2; i++)
    {
        if(i%D1 == 0)
        {
            cout << i << endl;
            return;
        }
    }
}