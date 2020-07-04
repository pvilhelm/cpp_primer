#include <iostream>
#include <string>
#include <cctype>

int main()
{
  using namespace std;
  
  string in;
  string prev;

  while (cin >> in) {
    if (!prev.empty() && in == prev && toupper(prev[0]) == prev[0]) {
      cout << in;
      break;
    }
    prev = in;
  }
  if (!cin)
    cout << "Ingen dublett hittades";
  
  return 0;
}
