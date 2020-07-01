#include <iostream>
#include <vector>

int main()
{
  int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

  std::vector<int> v((int*)ia, (int*)&ia[2][3] + 1);
  for (int i : v)
    std::cout << " " << i;
  std::cout << std::endl;

  for (auto &row : ia)
    for (auto &col : row)
      std::cout << " " << col;
  std::cout << std::endl;
  
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      std::cout << " " << ia[i][j];
  std::cout << std::endl;

  for (auto *pi = (int*)ia; pi < (int*)ia + sizeof ia / sizeof(int); pi++)
    std::cout << " " << *pi;
  std::cout << std::endl;

  for (auto prow = ia; prow < &ia[3]; prow++)
    for (auto pcol = *prow; pcol < *prow + 4; pcol++)
      std::cout << " " << *pcol;
  std::cout << std::endl;
  
  return 0;
}
