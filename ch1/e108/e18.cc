#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/"; //Skriver ut det innanför citattecknena
//fel	std::cout << /* "*/" */;
	std::cout << /* "*/" */";
//fel	std::cout << /*  "*/" /*  "/*"   */;
	std::cout << /*  "*/"" /*  "/*"   */;

	return 0;
}
