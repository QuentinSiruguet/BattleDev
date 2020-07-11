int Exercice()
{
	int n;
	std::cin >> n;

	int tab[100][3];
	for (int i = 0; i < n; i++)
		for (int y = 0; y < 3; y++)
			std::cin >> tab[i][y];

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int y = 0; y < n; y++)
			sum += tab[y][i];
		if (sum != 0)
		{
			std::cout << "NO";
			return 0;
		}
	}
	std::cout << "YES";
	return 0;
}