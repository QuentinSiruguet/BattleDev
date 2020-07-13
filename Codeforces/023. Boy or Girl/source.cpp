#include <iostream>
#include <string>
#include <vector>
int main() {
	std::string pseudo;
	std::cin >> pseudo;
	std::vector<char> letters;
	int count = 0;
	for (int i = 0; i < pseudo.size(); i++)
	{
		if (std::count(letters.begin(), letters.end(), pseudo[i]) == 0)
		{
			letters.push_back(pseudo[i]);
			count++;
		}
	}

	if (count % 2 == 0)
		std::cout << "CHAT WITH HER!";
	else
		std::cout << "IGNORE HIM!";
}