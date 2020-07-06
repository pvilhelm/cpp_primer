
#include <forward_list>
#include <string>
#include <iostream>

using namespace std;

forward_list<int> fl = {1,2,3,4,5,6,7,8,9,10};

int main()
{
  auto it = fl.begin();
  auto it_prev = fl.before_begin();

  while(it != fl.end()) {
    if (*it % 2 != 0) {
      it = fl.erase_after(it_prev);
    } else
      it_prev = it, it++;
  }

  for (auto e : fl)
    cout << e << " ";
  
  return 0;
}
