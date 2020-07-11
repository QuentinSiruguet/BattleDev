int Exercice()
{

	int tab[5][5];
	for (int i = 0; i < 5; i++)
		for (int y = 0; y < 5; y++)
			std::cin >> tab[i][y];

	int res = 0;
	for (int i = 0; i < 5; i++)
		for (int y = 0; y < 5; y++)
			if (tab[i][y] == 1)
				res += abs(2 - i) + abs(2 - y);

	std::cout << res;
	return 0;
}