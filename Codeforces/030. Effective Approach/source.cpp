#include <iostream>
#include <map>

int main() {
	long long n, k, sum1 = 0, sum2 = 0;
	std::map<long long, long long> values;

	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		long long value;
		std::cin >> value;
		values[value] = i;
	}

	std::cin >> k;

	for (int i = 0; i < k; i++)
	{
		long long value;
		std::cin >> value;
		sum1 += values[value]+1;
		sum2 += n - values[value];
	}
	std::cout << sum1 << " " << sum2;
}