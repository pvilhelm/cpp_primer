#include <iostream>
#include <vector>

int main()
{
  int arr[] = {1,2,3,4,5};

  std::vector<int> v(std::begin(arr), std::end(arr));
  
  return 0;
}
