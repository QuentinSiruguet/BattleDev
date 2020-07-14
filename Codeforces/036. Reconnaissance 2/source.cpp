#include <iostream>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> heights;

	for (int i = 0; i < n; i++)
	{
		int value;
		std::cin >> value;
		heights.push_back(value);
	}

	int diff = 1000, index1 = 0, index2 = 0;

	for (int i = 0; i < n; i++)
	{
		if (i == n - 1 && std::abs(heights[i] - heights[0]) < diff)
		{
			diff = abs(heights[i] - heights[0]);
			index1 = i;
			index2 = 0;
		}
		else if (std::abs(heights[i] - heights[i + 1]) < diff)
		{
			diff = abs(heights[i] - heights[i+1]);
			index1 = i;
			index2 = i+1;
		}
	}
	std::cout << index1+1 << " " << index2+1;
}