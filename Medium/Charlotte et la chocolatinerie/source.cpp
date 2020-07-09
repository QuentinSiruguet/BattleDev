#include <iostream>
#include <limits>
#include <sstream>
#include <cmath>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int n;
    cin >> n;
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        int timestamp;
        cin >> timestamp;
        int sum = 0;
        if(timestamp != 42)
        {
            while(timestamp > 0)
            {
                sum += timestamp%10;
                timestamp /= 10;
            }
            if(sum == 42)
                count++;
        }
        else count++;
    }
    cout << count << endl;
}