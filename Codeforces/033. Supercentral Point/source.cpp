#include <iostream>
#include <vector>
int main() {
	int n, count = 0;
	std::cin >> n;
	std::vector<std::pair<int, int>> map;

	for (int i = 0; i < n; i++)
	{
		int x, y;
		std::cin >> x >> y;
		map.push_back({x, y});
	}

	for (int i = 0; i < map.size(); i++)
	{
		bool right = false, left = false, lower = false, upper = false;

		for (int y = 0; y < map.size(); y++)
		{
			if (map[y].first > map[i].first && map[y].second == map[i].second)
				right = true;
			if (map[y].first < map[i].first && map[y].second == map[i].second)
				left = true;
			if (map[y].first == map[i].first && map[y].second < map[i].second)
				lower = true;
			if (map[y].first == map[i].first && map[y].second > map[i].second)
				upper = true;

		}
		if (right && left && lower && upper)
			count++;
	}
	std::cout << count;
}