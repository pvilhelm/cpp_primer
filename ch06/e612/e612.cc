#include <iostream>

void swap(int &l, int &r)
{
  int tmp = r;
  r = l;
  l = tmp;
}

int main()
{
  using namespace std;

  int a = 1, b = 2;

  cout << a << " " << b << endl;

  swap(a, b);

  cout << a << " " << b << endl;
  
  
  return 0;
}
