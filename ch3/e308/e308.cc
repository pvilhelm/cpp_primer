
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  cin >> s;

  /* Najsast. */
  for (auto& c : s)
    c = 'X';

  auto beg = s.begin();
  while(beg != s.end())
    *beg++ = 'X';

  cout << s << endl;
  
  for (auto beg = s.begin(); beg != s.end(); beg++)
    *beg = 'X';
  
  cout << s;

  return 0;
}
