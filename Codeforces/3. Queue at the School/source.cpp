#include <iostream>
int main() {
	int n, time;
	std::string token;
	std::cin >> n >> time >> token;

	for (int i = 0; i < time; i++)
	{
		for (int y = token.size() - 1; y > 0; y--)
		{
			if (token[y] == 'G' && token[y - 1] == 'B')
			{
				token[y - 1] = 'G';
				token[y] = 'B';
				y--;
			}
		}
	}
	std::cout << token;
}