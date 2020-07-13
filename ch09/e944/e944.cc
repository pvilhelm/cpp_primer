#include <string>
#include <iostream>

using std::string;

void fn(string &s, string oldVal, string newVal)
{
  int i = 0;
  while (i < s.size()) {
    bool hit = true;
    int j = i;
    for (auto c : oldVal) {
      if (c != s[j++]) {
	hit = false;
	break;
      }
    }
    if (hit) {
      s.replace(i, oldVal.size(), newVal);
      i += newVal.size();
    } else
      i++;
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
