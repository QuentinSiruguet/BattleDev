#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
   
    int sum = 0;
    int minimum = 1000;
	for(int i = 0; i < 4; i++)
	{
	    int size;
	    std::cin >> size;
	    sum += size;
	    if(size < minimum)
	        minimum = size;
	}
    std::cout<< sum-(4*minimum);
}