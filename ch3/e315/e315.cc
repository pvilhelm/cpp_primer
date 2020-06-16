
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> vs;

  string s;
  while (cin >> s)
    vs.push_back(s);

  cout << endl;
  for (auto ii : vs)
    cout << ii << " " << endl;

  return 0;
}
