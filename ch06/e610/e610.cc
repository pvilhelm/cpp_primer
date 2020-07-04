
#include <iostream>

void swap(int *a, int *b)
{
  int tmp = *b;
  *b = *a;
  *a = tmp;
}

int main()
{
  using namespace std;
  
  int a = 2, b = 1;

  cout << a << " " << b << endl;
  
  swap(&a, &b);

  cout << a << " " << b;

  return 0;
}
