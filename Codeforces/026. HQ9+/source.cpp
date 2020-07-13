#include <iostream>
#include <string>
int main() {
	std::string command;
	std::cin >> command;
	std::string res = "NO";
	for (int i = 0; i < command.size(); i++)
		if (command[i] == 'H' || command[i] == 'Q'
			|| command[i] == '9')
			res = "YES";
	std::cout << res;
}