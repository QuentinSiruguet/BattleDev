#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int year;
        cin >> year;
        
        if((year%4 == 0 && year%100 != 0)||(year%400 == 0))
            cout << "BISSEXTILE" << endl;
        else
            cout << "NON BISSEXTILE" << endl;
    }
}