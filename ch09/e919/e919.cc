#include <string>
#include <iostream>
#include <deque>
#include <list>

int main()
{
  using namespace std;

  deque<string> d;
  string s;
  while (cin >> s)
    d.push_back(s);

  for (auto it = d.cbegin(); it != d.cend(); it++)
    cout << *it;

  return 0;
}
