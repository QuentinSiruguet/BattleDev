#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <map>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
    int n;
    std::cin >> n;
    std::map<string, int> myMap;
    
	for(int i = 0; i < n; i++)
	{
	    std::string color;
	    std::cin >> color;
	    myMap[color] += 1;
	}


    std::string color1, color2;
    int numb1 = 0, numb2 = 0;
    for(auto &c : myMap)
    {
        if(c.second > numb1)
        {
            color1 = c.first;
            numb1 = c.second;
        }
    }
    
    for(auto &c : myMap)
    {
        if(c.second > numb2 && c.first != color1)
        {
            color2 = c.first;
            numb2 = c.second;
        }
    }
    
    std::cout << color1 << " " << color2;

}