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

  for (int i = 0; i < v.size()/2; i++)
    cout << v[i] << "+" << v[v.size() - i - 1] << "=" << v[i] + v[v.size() - i - 1] << endl;
    
  
  return 0;
}
