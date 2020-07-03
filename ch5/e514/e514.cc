#include <iostream>
#include <string>


int main()
{
  using namespace std;

  string s;
  string s_prev;
  int cnt = 1;
  
  while (cin >> s) {
    if (s_prev.empty()) {
      s_prev = s;
    } else if (s_prev == s) {
      cnt++;
    } else {
      cout << s_prev << ":" << cnt << endl;
      cnt = 1;
      s_prev = s;
    }
  }
  cout << s << ":" << cnt << endl;
  
  return 0;
}
