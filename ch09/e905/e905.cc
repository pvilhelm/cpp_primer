
#include <iostream>
#include <vector>

using namespace std;
vector<int>::iterator is_in_vec(vector<int>::iterator beg, vector<int>::iterator end, int value)
{
  bool found = false;
  while (beg != end)
    if (*beg == value)
      return beg;
    else
      beg++;
  return end;
}

int main()
{
  vector<int> v1{1,2,3,4,5,6};
  vector<int> v2{1,  3,4,5,6};

  cout << "2 i v1?" << (is_in_vec(v1.begin(), v1.end(), 2) != v1.end()) << endl;
  cout << "2 i v2?" << (is_in_vec(v2.begin(), v2.end(), 2) != v2.end()) << endl;

  return 0;
}
