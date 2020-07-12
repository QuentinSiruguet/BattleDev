#include <iostream>
#include <vector>

int main() {
	int k, l, m, n, d;
	std::cin >> k >> l >> m >> n >> d;

	std::vector<char> grid;
	grid.push_back('>');
	for (int i = 1; i <= d; i++)
		grid.push_back('.');

	for (int i = k; i <= d; i += k)
		grid[i] = 'k';
	for (int i = l; i <= d; i += l)
		grid[i] = 'l';
	for (int i = m; i <= d; i += m)
		grid[i] = 'm';
	for (int i = n; i <= d; i += n)
		grid[i] = 'n';
	std::cout << d - std::count(grid.begin(), grid.end(), '.');
}