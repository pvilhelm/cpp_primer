#include <iostream>

int inc(void)
{
  static int i = 0;
  return i++;
}

int main()
{
  using namespace std;
  
  for (int i = 0; i < 10; i++)
    cout << inc() << endl;
  
  return 0;
}
