#include <iostream>

int fact(int val)
{
  int ret = 1;
  while (val > 1)
    ret *= val--;
  return ret;
}

int main()
{
  using namespace std;

  int q;

  if(!(cin >> q))
    return -1;

  cout << fact(q);
  
  return 0;
}
