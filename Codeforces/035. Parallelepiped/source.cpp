#include <iostream>
#include <cmath>
int main() {
	int areas[3];
	for (int i = 0; i < 3; i++)
		std::cin >> areas[i];

	int points[3] = {	std::sqrt(areas[0] * areas[2] / areas[1]),
						std::sqrt(areas[0] * areas[1] / areas[2]),
						std::sqrt(areas[1] * areas[2] / areas[0]) };

	std::cout << 4 * (points[0] + points[1] + points[2]);
}