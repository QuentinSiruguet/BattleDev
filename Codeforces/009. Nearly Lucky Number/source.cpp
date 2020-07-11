#include <iostream>
#include <string>
int main() {
	std::string word;
	std::cin >> word;
	int count = 0;
	for (int i = 0; i < word.size(); i++)
		if (word[i] == '4' || word[i] == '7')
			count++;
 
	if (count == 7 || count == 4)
		std::cout << "YES";
	else
		std::cout << "NO";
}