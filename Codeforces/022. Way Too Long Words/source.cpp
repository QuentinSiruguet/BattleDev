#include <iostream>
#include <string>
#include <sstream>
int main() {
	int n;
	std::cin >> n;
	std::stringstream ss;
	for (int i = 0; i < n; i++)
	{
		std::string word;
		std::cin >> word;
		if (word.size() <= 10)
			ss << word << std::endl;
		else
			ss << word[0] << word.size() - 2 << word[word.size() - 1] << std::endl;
	}
	std::cout << ss.str();
}