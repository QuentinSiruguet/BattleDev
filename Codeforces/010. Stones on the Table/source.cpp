#include <iostream>
#include <string>
int main() {
	int n;
	std::cin >> n;
	std::string word;
	std::cin >> word;
	int count = 0;
	for (int i = 1; i < word.size(); i++)
		if (word[i] == word[i - 1])
			count++;
	std::cout << count;
}