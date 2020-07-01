#include <string>
#include <iostream>

int main()
{
  std::string s1 = "qweqwe";
  std::string s2 = "qweqweq";

  std::cout << (s1 == s2) << std::endl;

  char cs1[] = "qweqwe";
  char cs2[] = "qweqweq";

  auto pcs1 = cs1;
  auto pcs2 = cs2;

  bool same = true;
  while (true) {
    if (*pcs1 != *pcs2) {
      same = false;
      break;
    }
    if (!*pcs1 || !*pcs2)
      break;
    pcs1++, pcs2++;
  }
  
  std::cout << same << std::endl;

  return 0;
}
