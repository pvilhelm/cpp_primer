#include <iostream>
#include <list>
#include <vector>

bool list_vec_equal(std::list<int> l, std::vector<int> v)
{
  if (l.size() != v.size()) return false;

  auto cit_l = l.cbegin();
  auto cit_v = v.cbegin();

  while (cit_l != l.cend() && cit_v != v.cend())
    if (*cit_l++ != *cit_v++)
      return false;

  return true;
}

std::list<int> l1{1,2,3,4};
std::list<int> l2{1,  3,4};
std::vector<int> v1{1,2,3,4};

int main()
{
  std::cout << list_vec_equal(l1, v1) << std::endl;
  std::cout << list_vec_equal(l2, v1) << std::endl;

  return 0;
}
