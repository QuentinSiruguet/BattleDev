#include <iostream>
int main() {
	std::string token;
	std::cin >> token;

	for (int i = 0; i < token.size(); i++)
	{
		if (token[i] == '.')
			std::cout << 0;
		else if (token[i] == '-' && token[i+1] == '.')
		{
			std::cout << 1; 
			i++;
		}
		else
		{
			std::cout << 2; 
			i++;
		}
	}
}