#include <iostream>
#include <algorithm>
int main() {
	int values[8];
	for (int i = 0; i < 8; i++)
		std::cin >> values[i];

	int toasts[3] = {	(values[1] * values[2]) / (values[6]),
						(values[3]*values[4]),
						(values[5]/values[7])};
	std::cout << std::min(std::min(toasts[0], toasts[1]), toasts[2])/ values[0];
}