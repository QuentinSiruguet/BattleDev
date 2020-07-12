#include <iostream>
#include <string>
int main() {
	std::string binary1, binary2;
	std::cin >> binary1 >> binary2;
	std::string sres = binary1;

	for (int i = 0; i < binary1.size(); i++)
	{
		if (binary1[i] == binary2[i])
			sres[i] = '0';
		else if (binary1[i] == '1' || binary2[i] == '1')
			sres[i] = '1';
	}
	std::cout << sres;
}