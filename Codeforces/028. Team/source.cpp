#include <iostream>

int main() {
	int n, n1, n2, n3, count = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> n1 >> n2 >> n3;
		if (n1 + n2 + n3 > 1)
			count++;
	}
	std::cout << count;
}