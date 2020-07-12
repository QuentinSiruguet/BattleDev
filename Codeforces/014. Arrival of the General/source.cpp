#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> heights;

	for (int i = 0; i < n; i++)
	{
		int height;
		std::cin >> height;
		heights.push_back(height);
	}

	int count = 0;
	while (heights[0] != *std::max_element(heights.begin(), heights.end()))
	{
		int index = std::distance(heights.begin(), std::max_element(heights.begin(), heights.end())) - 1;
		int value = heights[index];
		heights[index] = heights[index + 1];
		heights[index + 1] = value;
		count++;
	}
	while (heights[heights.size()-1] != *std::min_element(heights.begin(), heights.end()))
	{
		int index = heights.size() - std::distance(heights.rbegin(), std::min_element(heights.rbegin(), heights.rend())) - 1;
		int value = heights[index];
		heights[index] = heights[index + 1];
		heights[index + 1] = value;
		count++;
	}
	std::cout << count;
}