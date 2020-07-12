#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {
	std::string op;
	std::vector<int> numbs;
	std::stringstream ss;

	std::cin >> op;
	ss << op;
	
	while (std::getline(ss, op, '+'))
		numbs.push_back(std::stoi(op));

	std::sort(numbs.begin(), numbs.end());
	for (int i = 0; i < numbs.size(); i++)
	{
		std::cout << numbs[i];
		if (i != numbs.size() - 1)
			std::cout << "+";
	}
}