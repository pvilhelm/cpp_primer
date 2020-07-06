#include <list>
#include <deque>
#include <iostream>
#include <iterator>
using namespace std;

int main()
{
  istream_iterator<int> beg(cin), end;
  list<int> l(beg, end);

  deque<int> d_odd;
  deque<int> d_even;
  for (auto e : l)
    if (e % 2)
      d_odd.push_back(e);
    else
      d_even.push_back(e);

  for (auto e : d_odd)
    cout << e << " ";
  for (auto e : d_even)
    cout << e << " ";

  return 0;      
}
