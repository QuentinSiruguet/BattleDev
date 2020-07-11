#include <iostream>
#include <string>

int main() {

	int year;
	std::cin >> year;

	for (int i = year + 1; i < 10000; i++)
	{
		std::string syear = std::to_string(i);
		bool work = true;
		for (int y = 0; y < syear.size(); y++)
		{
			if (std::count(syear.begin(), syear.end(), syear[y]) != 1)
			{
				work = false;
				break;
			}
		}
		if (work)
		{
			std::cout << i;
			break;
		}
	}
}