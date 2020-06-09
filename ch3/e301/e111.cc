#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{

	int i1, i2;

	cout << "Ange två heltal att skriva ut alla tal emellan" << endl;

	cin >> i1 >> i2;

	int i = i1;

	while (i <= i2) {
		cout << " " << i++ << " ";
	}

	return 0;
}
