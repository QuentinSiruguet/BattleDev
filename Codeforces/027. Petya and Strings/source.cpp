#include <iostream>
#include <string>
#include <locale>
int main() {
	std::string word1, word2;
	std::locale loc;
	std::cin >> word1 >> word2;

	for (int i = 0; i < word1.size(); i++)
	{
		word1[i] = std::tolower(word1[i], loc);
		word2[i] = std::tolower(word2[i], loc);
	}

	if (word1 < word2)
		std::cout << -1;
	else if (word2 < word1)
		std::cout << 1;
	else
		std::cout << 0;
}