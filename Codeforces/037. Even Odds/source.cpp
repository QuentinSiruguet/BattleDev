#include <iostream>

int main() {
	long long n, k;
	std::cin >> n >> k;

	if (k <= (n + 1) / 2)
		std::cout << 2 * k - 1;
	else
		std::cout << (k - (n + 1) / 2) * 2;
}