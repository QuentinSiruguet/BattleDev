#include <iostream>
int main() {
	int prime[] ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};

	int number1, number2;
	std::cin >> number1 >> number2;

	int index = 0;

	for (; index < 16; index++)
		if (prime[index] == number1)
			break;
	if (prime[index + 1] == number2)
		std::cout << "YES";
	else
		std::cout << "NO";
}