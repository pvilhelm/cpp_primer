#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

void print_vec(vector<int>::const_iterator beg, const vector<int>::const_iterator &end)
{
  if (beg == end) return;
  
  cout << *beg << " ";
  
  print_vec(++beg, end);

  #ifndef NDEBUG
  static int i;
  cout << " " << i++;
  #endif
}

int main()
{
  vector<int> v{1,2,3,4,5,5};

  print_vec(v.cbegin(), v.cend());

  return 0;
}
