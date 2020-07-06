
#include <vector>
#include <iostream>

int main()
{
  std::vector<int> v;

  int i;

  std::cin >> i;

  switch(i) {
  case 1:
    return v.at(0);
  case 2:
    return v[0];
  case 3:
    return v.front();
  case 4:
    return v.back();
  }

  return 0;
}
