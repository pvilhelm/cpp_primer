#include <iostream>

int bigger(int i, const int *pi)
{
  return i > *pi ? i : *pi;
}

int main()
{
  using namespace std;

  int i1, i2;

  cin >> i1 >> i2;

  cout << bigger(i1, &i2);
  
  return 0;
}
