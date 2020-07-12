#include <iostream>
#include <iomanip>

int main() {
	int n;
	std::cin >> n;
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		int value;
		std::cin >> value;
		sum += value;
	}
	sum /= n;
	std::cout << std::fixed << std::setprecision(12) << sum;
}