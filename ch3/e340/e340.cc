#include <cstring>
#include <iostream>

int main()
{
  char ca1[] = "qwe";
  char ca2[] = "qweq";
  char ca3[10];

  strcpy(ca3, ca1);
  strcat(ca3, ca2);

  std::cout << ca3 << std::endl;

  return 0;
}
