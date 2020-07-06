#include <list>
#include <vector>
#include <iostream>

int main()
{
  int ia[] = {0, 1, 1,2,3,5,8,13,21,55,89};

  std::list<int> l(std::begin(ia), std::end(ia));
  std::vector<int> v(std::begin(ia), std::end(ia));
  auto lit = l.begin();
  while (lit != l.end())
    if (*lit % 2 != 0)
      lit = l.erase(lit);
    else
      lit++;

  auto vit = v.begin();
  while (vit != v.end())
    if (*vit % 2 != 0)
      vit = v.erase(vit);
    else
      vit++;
      

  for (auto e : l)
    std::cout << e << " ";
  std::cout << std::endl;
  for (auto e : v)
    std::cout << e << " ";
  std::cout << std::endl;
  return 0;
}
