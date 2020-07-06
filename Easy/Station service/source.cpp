#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int capacity, conso, pdistance = 0;
    std::cin >> capacity >> conso;

    for(int i = 0; i < 4; i++)
    {
        int distance;
        std::cin >> distance;
        if((capacity/conso)*100 < distance-pdistance)
        {
            std::cout << "KO";
            return;
        }
        pdistance = distance;
    }
    std::cout << "OK";
}