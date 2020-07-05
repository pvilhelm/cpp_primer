#include <iostream>
#include <initializer_list>

using namespace std;

int sum(initializer_list<int> il)
{
  int s = 0;
  for (auto &e : il)
    s += e;
  return s;
}

int main()
{
  initializer_list<int> il = {1,2,3,4,5,6,7,8,9};

  cout << sum(il);

  return 0;
}
