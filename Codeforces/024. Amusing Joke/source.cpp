#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
int main() {
	std::vector<char> letters, tocompare;

	std::string l1, l2, l3, res = "YES";
	std::cin >> l1 >> l2 >> l3;

	for (int i = 0; i < l1.size(); i++)
		letters.push_back(l1[i]);
	for (int i = 0; i < l2.size(); i++)
		letters.push_back(l2[i]);
	for (int i = 0; i < l3.size(); i++)
		tocompare.push_back(l3[i]);

	std::sort(letters.begin(), letters.end());
	std::sort(tocompare.begin(), tocompare.end());

	if (letters.size() == tocompare.size())
	{
		for (int i = 0; i < letters.size(); i++)
			if (letters[i] != tocompare[i])
				res = "NO";
	}
	else
		res = "NO";
	std::cout << res;
}