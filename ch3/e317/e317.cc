
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
  vector<string> vw;
  string tmp;
  while(cin >> tmp)
    vw.push_back(tmp);

  for (auto& v : vw)
    for (auto& c : v)
      c = toupper(c);

  for (auto& s : vw)
    cout << s << " ";

  cout << endl;
  return 0;
}
