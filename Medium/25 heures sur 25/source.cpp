#include <iostream>
#include <limits>
#include <sstream>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void filling_calendar(int calendar[5][600], int n)
{
    for(int i = 0; i < 5; i++)
        for(int y = 0; y < 600; y++)
            calendar[i][y] = 1;
            
     for(int i = 0; i < n ; i++)
    {
        int day;
        std::cin >> day;
        std::string hour;
        std::cin >> hour;
        
        int minutes1 = (stoi(hour.substr(0, 2))-8)*60 + stoi(hour.substr(3, 5));
        int minutes2 = (stoi(hour.substr(6, 8))-8)*60 + stoi(hour.substr(9, 10));
        
        for(int i = minutes1; i <= minutes2; i++)
            calendar[day-1][i] = 0;
    }
}

int searching_dispo(int calendar[5][600], int &resminute1, int &resminute2)
{
    int resday = -1;
    for(int i = 0; i < 5; i++)
    {
        int strike = 0;
        resminute1 = 0;
        for(int y = 0; y < 600; y++)
        {
            if(calendar[i][y] == 1)
                strike++;
            else
            {
                strike = 0;
                resminute1 = y+1;
            }
            if(strike >= 60)
            {
                resminute2 = y;
                resday = i+1;
                break;
            }
        }
        if(resday != -1)
            break;
    }
    resminute1 += 8*60;
    resminute2 += 8*60;
    return resday;
}

std::string formation_res(int resday, int resminute1, int resminute2)
{
    std::stringstream ss;
    ss << resday << " ";
    if(resminute1/60 < 10) ss << "0";
    ss << resminute1/60 << ":";
    if(resminute1%60 < 10) ss << "0";
    ss << resminute1%60 << "-";
    
    if(resminute2/60 < 10) ss << "0";
    ss << resminute2/60 << ":";
    if(resminute2%60 < 10) ss << "0";
    ss << resminute2%60;
    
    return ss.str();
}

void ContestExerciseImpl::main() {
    int calendar[5][600];
    int n, resminute1, resminute2, resday;
    std::cin >> n;
    
    filling_calendar(calendar, n);
    resday = searching_dispo(calendar, resminute1, resminute2);

    std::cout << formation_res(resday, resminute1, resminute2);
}