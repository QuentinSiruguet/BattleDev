#include <iostream>
#include <vector>
int main() {
	int n, countl = 0, countr = 0, seconds = 0;
	std::cin >> n;
	std::vector<std::pair<int, int>> doors;

	for (int i = 0; i < n; i++)
	{
		std::pair<int, int> add;
		std::cin >> add.first >> add.second;
		doors.push_back(add);
		countl += doors[i].first;
		countr += doors[i].second;
	}

	if ((float)countl >= n / 2.0)
		for (int i = 0; i < n; i++)
			if (doors[i].first != 1)
				seconds++;
	else if ((float)countl < n / 2.0)
		for (int i = 0; i < n; i++)
			if (doors[i].first != 0)
				seconds++;

	if ((float)countr >= n / 2.0)
		for (int i = 0; i < n; i++)
			if (doors[i].second != 1)
				seconds++;
	else if ((float)countr < n / 2.0)
		for (int i = 0; i < n; i++)
			if (doors[i].second != 0)
				seconds++;

	std::cout << seconds;
}