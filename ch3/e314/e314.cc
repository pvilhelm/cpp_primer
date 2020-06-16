
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<int> vi;

  int i;
  while (cin >> i)
    vi.push_back(i);

  cout << endl;
  for (auto ii : vi)
    cout << ii << " " << endl;

  return 0;
}
