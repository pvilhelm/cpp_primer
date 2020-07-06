
#include <iostream>
#include <list>
#include <vector>
#include <string>

using namespace std;

list<const char*> l{"Ett", "Två", "Tre", "Fyra"};

int main()
{
  vector<string> v;

  for (auto e : l)
    v.push_back(e);
    //v.push_back(string{e});

  for (auto e : v)
    cout << e << endl;

  return 0;
}
