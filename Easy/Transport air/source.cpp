#include <iostream>
#include <limits>
#include <vector>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int gd[2], le[2];
    vector<int> pg;
    
    std::cin >> gd[0] >> le[0] >> gd[1] >> le[1];

    
    for(int i = gd[0]; i <= 36; i += le[0])
        pg.push_back(i);

    
    for(int i = gd[1]; i <= 36; i += le[1])
    {
        for(auto &p : pg)
        {
            if(p == i)
            {
                std::cout << p;
                return;
            }
        }
    }
}