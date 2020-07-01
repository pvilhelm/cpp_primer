#include <vector>

using namespace std;

int main()
{
  vector<int> v1(10);
  vector<int> v2(10,2);

  bool same = true;
  int arr1[10] = {1,2};
  int arr2[10] = {};

  for (int i = 0; i < 10; i++)
    if (arr1[i] != arr2[i]) {
      same = false;
      break;
    }
  
  
  return v1 == v2 || same;
}
