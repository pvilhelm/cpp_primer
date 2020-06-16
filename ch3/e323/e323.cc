#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  vector<int> v(10, 3);

  for (auto it = v.begin(); it != v.end(); it++)
    cout << (*it = *it * 2) << endl;

  return 0;
}
