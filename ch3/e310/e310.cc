
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string s;
  string o;
  
  char c;
  while(cin >> c)
    s += c;

  for (auto& c : s)
    if (!ispunct(c))
      o += c;

  cout << endl << o;

  return 0;
}
