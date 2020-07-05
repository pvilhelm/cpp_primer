#include <iostream>

void my_swap(int *pi1, int *pi2)
{
  int tmp = *pi1;
  *pi1 = *pi2;
  *pi2 = tmp;
}

int main()
{
  using namespace std;

  int i1, i2;

  cin >> i1 >> i2;
  cout << i1 << " " << i2 << endl;
  my_swap(&i1, &i2);
  cout << i1 << " " << i2 << endl;

  return 0;
}
