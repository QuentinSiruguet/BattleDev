#include <iostream>
int main() {
 
	int grid[5][5] = { {0,0,0,0,0},
						{0,1,1,1,0},
						{0,1,1,1,0},
						{0,1,1,1,0},
						{0,0,0,0,0} };
 
	for (int i = 1; i < 4; i++)
	{
		for (int y = 1; y < 4; y++)
		{
			int n;
			std::cin >> n;
			for (int k = 0; k < n; k++)
			{
				grid[i - 1][y] = !grid[i - 1][y];
				grid[i][y - 1] = !grid[i][y - 1];
				grid[i][y] = !grid[i][y];
				grid[i][y + 1] = !grid[i][y + 1];
				grid[i + 1][y] = !grid[i + 1][y];
			}
		}
	}
	for (int i = 1; i < 4; i++)
	{
		for (int y = 1; y < 4; y++)
			std::cout << grid[i][y];
		std::cout << std::endl;
	}
}