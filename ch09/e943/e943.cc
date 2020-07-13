#include <string>
#include <iostream>

using std::string;

void fn(string &s, string oldVal, string newVal)
{
  auto itbeg = s.begin();

  while (itbeg != s.end()) {
    bool hit = true;
    auto itbeg2 = itbeg;
    for (auto c : oldVal) {
      if (c != *itbeg2++) {
	hit = false;
	break;
      }
    }
    if (hit) {
      itbeg = s.erase(itbeg, itbeg2);
      itbeg = s.insert(itbeg, newVal.begin(), newVal.end());
      itbeg += newVal.size();
    } else
      itbeg++;
    
  }
}

int main()
{
  string s, oldVal, newVal;

  std::cin >> s >> oldVal >> newVal;
  fn(s, oldVal, newVal);
  std::cout << std::endl << s;

  return 0;
}
