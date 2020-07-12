#include <iostream>
#include <vector>
int main() {
	int n;
	std::cin >> n;
	std::vector<int> scores;
	int amazing = 0;
	int min, max;
	for (int i = 0; i < n; i++)
	{
		int score;
		std::cin >> score;
		scores.push_back(score);
		if (i == 0)
		{
			min = score;
			max = score;
			continue;
		}
		else
		{
			if (score > max)
			{
				amazing++;
				max = score;
			}
			else if (score < min)
			{
				amazing++;
				min = score;
			}
		}
	}
	std::cout << amazing;
}