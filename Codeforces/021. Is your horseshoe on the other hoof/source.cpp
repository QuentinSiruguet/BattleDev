#include <iostream>
#include <vector>
#include <algorithm>
int main() {
	std::vector<int> s;

	for (int i = 0; i < 4; i++)
	{
		int value;
		std::cin >> value;
		s.push_back(value);
	}
	std::sort(s.begin(), s.end());

	int count = 0;
	for (int i = 0; i < 3; i++)
		if (s[i] == s[i + 1])
			count++;

	std::cout << count;
}