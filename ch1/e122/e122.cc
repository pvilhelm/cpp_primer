
#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book0, book1;

  while(std::cin >> book0)
    std::cout << (book1 += book0) << std::endl;

  return 0;
}
