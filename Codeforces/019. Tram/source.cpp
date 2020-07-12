#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int passengers = 0, maxpassengers = 0;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		std::cin >> a >> b;
		passengers -= a;
		passengers += b;
		if (passengers > maxpassengers)
			maxpassengers = passengers;
	}
	std::cout << maxpassengers;
}