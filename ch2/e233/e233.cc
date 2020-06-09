
#include <iostream>

int main()
{
  int i = 0, &r = i;
  auto a = r; /* int */
  const int ci = i, &cr = ci;
  auto b = ci; /* int */
  auto c = cr; /* int */
  auto d = &i; /* ptr to int */
  auto e = &ci;/* ptr to cint */
  auto &g = ci;/* ref to ptr to cint */

  std::cout << a << std::endl; /* 0 */
  a = 42;
  std::cout << a << std::endl; /* 42 */
  std::cout << b << std::endl; /* 0 */
  b = 42;
  std::cout << b << std::endl; /* 42 */
  std::cout << c << std::endl; /* 0 */
  c = 42;
  std::cout << c << std::endl; /* 42 */

  /* int to ptr */
  //d = 42;
 
  /* int to ptr */
  //e = 42;

  /*ref to const int */
  //g = 42;

}
