#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	int n;
	std::cin >> n;
	std::vector<int> dists;

	for (int i = 0; i < n; i++)
	{
		int value;
		std::cin >> value;
		dists.push_back(value);
	}

	int min = *std::min_element(dists.begin(), dists.end());
	int pos = std::distance(dists.begin(), std::min_element(dists.begin(), dists.end()));

	for (int i = 0; i < n; i++)
	{
		if (dists[i] == min && i != pos)
		{
			std::cout << "Still Rozdil";
			return 0;
		}
	}
	std::cout << pos+1;
}