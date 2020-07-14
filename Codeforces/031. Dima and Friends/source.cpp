#include <iostream>

int main() {
	int n,value, sum = 0, res = 0;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> value;
		sum += value;
	}
	for (int i = 1; i <= 5; i++)
		if ((sum + i) % (n + 1) != 1)
			res++;
	std::cout << res;
}