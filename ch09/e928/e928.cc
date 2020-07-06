#include <string>
#include <forward_list>
#include <iostream>

using namespace std;

void insert_after_value(forward_list<string> &fl, string s, string v)
{
  auto it = fl.begin();
  if (it == fl.end()) {
    fl.insert_after(fl.before_begin(), v);
    return;
  }
  while (true) {
    auto it_next = it;
    it_next++;
    if (*it == s || it_next == fl.end()) {
      fl.insert_after(it, v);
      return;
    }
    it++;
  }
}

int main()
{
  forward_list<string> fl{"a","b","c","d","e"};

  insert_after_value(fl, "b", "best");
  insert_after_value(fl, "z", "zzz");  
  for (auto e : fl)
    cout << e << " ";

  return 0;
}
