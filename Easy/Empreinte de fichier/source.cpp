
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include "exercise.hpp"

ContestExerciseImpl::ContestExerciseImpl() : Exercise() {}


/////////Solution 1
void ContestExerciseImpl::main() {
        std::string line;
        std::getline(std::cin, line);
		
		size_t pos = line.find("000");
		while (pos != std::string::npos)
		{
			line.erase(pos+2, 1);
			pos = line.find("000");
		}
	
        pos = line.find("111");
		while (pos != std::string::npos)
		{
			line.erase(pos+1, 2);
			pos = line.find("111");
		}

        pos = line.find("10");
        while (pos != std::string::npos)
		{
			line.erase(pos+1, 1);
			pos = line.find("10");
		}
		std::cout << line << endl;
}


/////////Solution 2
void ContestExerciseImpl::main() {
	std::string line;
	std::getline(std::cin, line);

	int start = 0;
	for (int i = 0; i < 2; i++)
		if (line[i] == '0')
			start++;
		else
			break;

	size_t pos = line.find("111");
		while (pos != std::string::npos)
		{
			line.erase(pos+1, 2);
			pos = line.find("111");
		}
		
	pos = line.find("0", start);
	while (pos != std::string::npos)
	{
		line.erase(pos, 1);
		pos = line.find("0", start);
	}

	std::cout << line << std::endl;
}