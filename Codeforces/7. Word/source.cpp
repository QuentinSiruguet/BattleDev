#include <iostream>
#include <string>
int main() {
	std::string word;
	std::cin >> word;
	int countu = 0, countl = 0;
 
	for (int i = 0; i < word.size(); i++)
	{
		if (isupper(word[i]))
			countu++;
		else
			countl++;
	}
 
	if (countl >= countu)
		for (int i = 0; i < word.size(); i++)
			word[i] = tolower(word[i]);
	else
		for (int i = 0; i < word.size(); i++)
			word[i] = toupper(word[i]);
 
	std::cout << word;
}