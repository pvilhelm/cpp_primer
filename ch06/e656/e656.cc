#include <iostream>
#include <vector>

using namespace std;

using pf = int (*)(int, int);

int add(int a, int b)
{
  return a + b;
}

int mul(int a, int b)
{
  return a * b;
}

int sub(int a, int b)
{
  return a - b;
}

int ddiv(int a, int b)
{
  return a / b;
}

vector<pf> v{add, mul, sub, ddiv};

int main()
{
  for (auto e : v)
    cout << e(1,2) << " ";

  return 0;
}
