#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}

void ContestExerciseImpl::main() {
   int n;
   std::cin >> n;
   std::string looser_name;
   int looser_size = 1000;
   
   for(int i = 0; i < n; i++)
   {
       std::string name;
       int size;
       cin >> name >> size;
       if(size < looser_size)
       {
           looser_name = name;
           looser_size = size;
       }
       
   }
   std::cout << looser_name;
}