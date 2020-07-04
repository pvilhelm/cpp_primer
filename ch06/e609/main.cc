#include <iostream>
#include "fact.h"

int main()
{
  using namespace std;

  int i;

  while (cin >> i)
    cout << fact(i);
  
  return 0;
}
