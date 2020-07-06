#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    
    int pilotes[21];
    for(int i = 1; i <= 20; i++)
        pilotes[i] = i;
        
    int pref,n;
    std::cin >> pref >> n;

    for(int i =  0; i < n; i++)
    {
        int pilote;
        char action;
        std::cin >> pilote >> action;
        
        
        if(action == 'D')
        {
            pilotes[pilote] -= 1;
            for(int y = 1; y <= 20; y++)
            {
                if(pilotes[y] == pilotes[pilote] && y != pilote)
                {
                    pilotes[y]++;
                    break;
                }
            }
        }
        
        else if(action == 'I')
        {
            for(int y = 1; y <= 20; y++)
                if(pilotes[y] > pilotes[pilote])
                    pilotes[y]--;
                    
            pilotes[pilote] = -1000;
        }

    }
    if(pilotes[pref] <= 0)
        std::cout << "KO";
    else
        std::cout << pilotes[pref];
}

