
#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item book;
  std::string isbn_curr;
  int cnt = 0;

  while(std::cin >> book) {
    if (isbn_curr == "")
      isbn_curr = book.isbn();
    if (isbn_curr == book.isbn())
      cnt++;
    else {
      std::cout << "ISBN: " << isbn_curr << ", antal: " << cnt << std::endl;
      isbn_curr = book.isbn();
      cnt = 1;
    }  
  }
  
  std::cout << "ISBN: " << isbn_curr << ", antal: " << cnt << std::endl;

  return 0;
}
