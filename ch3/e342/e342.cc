#include <iostream>
#include <vector>

int main()
{
  std::vector<int> v = {1,2,3,4,5,6,7,8,9,10};

  int arr[10];

  for (int i = 0; i < v.size(); i++)
    arr[i] = v[i];
  
  return 0;
}
