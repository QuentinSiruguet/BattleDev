#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int count5 = 0;
	int count0 = 0;

	for (int i = 0; i < n; i++)
	{
		int value;
		std::cin >> value;

		if (value == 5)
			count5++;
		else
			count0++;
	}

	if (count0 == 0)
		std::cout << -1;
	else if (count5 < 9)
		std::cout << 0;
	else
	{
		count5 -= count5 % 9;
		for (int i = 0; i < count5; i++)
			std::cout << 5;
		for (int i = 0; i < count0; i++)
			std::cout << 0;
	}
}