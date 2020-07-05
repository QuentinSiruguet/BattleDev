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
        int age;
        cin >> age;
        if(age >= 5 && age <= 9)
            count++;
    }
    std::cout << count;
}