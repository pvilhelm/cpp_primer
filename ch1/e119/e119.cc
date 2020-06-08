#include <iostream>

int main()
{

  int i1, i2, tmp;

  std::cout << "Ange två heltal att skriva ut alla tal emellan" << std::endl;

  std::cin >> i1 >> i2;

  if (i2 < i1) {
    tmp = i1;
    i1 = i2;
    i2 = tmp;
  }
 	
  int i = i1;

  while (i <= i2) {
    std::cout << " " << i++ << " ";
  }

  return 0;
}
