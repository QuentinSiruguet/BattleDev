#include <iostream>
#include <vector>
int main() {
	int pages, actual_day = 0;
	std::vector<int> max_pages;

	std::cin >> pages;

	for (int i = 0; i < 7; i++)
	{
		int value;
		std::cin >> value;
		max_pages.push_back(value);
	}

	while (pages > 0)
	{
		pages -= max_pages[(actual_day)%7];
		actual_day++;
	}
	if (actual_day % 7 > 0)
		std::cout << (actual_day % 7);
	else
		std::cout << 7;
}