
#include <iostream>
#include <vector>

using namespace std;
bool is_in_vec(vector<int>::const_iterator beg, vector<int>::const_iterator end, int value)
{
  bool found = false;
  while (beg != end)
    if (*beg++ == value)
      return true;
  return false;
}

int main()
{
  vector<int> v1{1,2,3,4,5,6};
  vector<int> v2{1,  3,4,5,6};

  cout << "2 i v1?" << is_in_vec(v1.begin(), v1.end(), 2) << endl;
  cout << "2 i v2?" << is_in_vec(v2.begin(), v2.end(), 2) << endl;

  return 0;
}
