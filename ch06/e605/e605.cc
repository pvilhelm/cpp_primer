#include <iostream>

int abs(int i)
{
  if (i < 0)
    return -i;
  return i;
}

int main()
{
  using namespace std;
  
  int i;

  cin >> i;

  cout << abs(i);
  
  return 0;
}
