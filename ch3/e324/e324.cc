#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;
  int i;
  while (cin >> i)
    v.push_back(i);

  for (auto iter = v.cbegin(); iter + 1 < v.cend(); iter += 2)
    cout << *iter << "+" << *(iter+1) << "=" << *iter + *(iter+1) << endl;

  for (auto it = v.begin(), eit = v.end() - 1; it - v.begin() < v.size()/2; it++, eit--) 
    cout << *it << " + " << *eit << "=" << *it + *eit << endl;
  
  return 0;
}
