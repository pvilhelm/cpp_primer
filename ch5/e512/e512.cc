#include <iostream>
#include <cctype>

int main()
{
  using namespace std;

  char c;
  bool f = false;
  int cnt = 0;
  
  cin >> noskipws;
  
  while(cin >> c) {
    if (f) {
      if (c == 'f' || c == 'l' || c == 'i')
	cnt++;
      f = false;
    } else if (c == 'f')
      f = true;
  }

  cout  << cnt;
  
  return 0;
}
