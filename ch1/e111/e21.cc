#include <iostream>

int main()
{

	int i1, i2;

	std::cout << "Ange två heltal att skriva ut alla tal emellan" << std::endl;

	std::cin >> i1 >> i2;

	int i = i1;

	while (i <= i2) {
		std::cout << " " << i++ << " ";
	}

	return 0;
}
