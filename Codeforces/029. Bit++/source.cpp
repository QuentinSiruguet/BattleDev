#include <iostream>
#include <string>
int main() {
	int n, x = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::string command;
		std::cin >> command;
		if (command.find("++") != std::string::npos)
			x++;
		else if (command.find("--") != std::string::npos)
			x--;
	}
	std::cout << x;
}