#include <iostream>
int main() {
	int numb;
	std::cin >> numb;
	if (numb % 2 != 0)
		std::cout << -1;
	else
	{
		for (int i = 1; i <= numb; i++)
		{
			if (i % 2 != 0)
				std::cout << i + 1 << " ";
			else
				std::cout << i - 1 << " ";
		}
	}
}