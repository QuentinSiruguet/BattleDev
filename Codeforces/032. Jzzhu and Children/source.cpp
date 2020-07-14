#include <iostream>
#include <vector>
int main() {
	int n,m;
	std::cin >> n >> m;
	std::vector<std::pair<int, int>> children;

	for (int i = 0; i < n; i++)
	{
		int value;
		std::cin >> value;
		children.push_back({i+1, value});
	}

	while (children.size() > 1)
	{
		if (children[0].second > m)
		{
			children[0].second -= m;
			children.push_back(children[0]);
		}
		children.erase(children.begin());
	}
	std::cout << children[0].first;
}