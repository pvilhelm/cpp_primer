#include <iostream>

int main()
{
  int i;

  while(std::cin >> i)
    std::cout << ((i%2)?"Udda":"Jämnt") << std::endl;
  
  return 0;
}
