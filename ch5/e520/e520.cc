#include <iostream>
#include <string>

int main()
{
  using namespace std;
  
  string in;
  string prev;

  while (cin >> in) {
    if (!prev.empty() && in == prev) {
      cout << in;
      break;
    }
    prev = in;
  }
  if (!cin)
    cout << "Ingen dublett hittades";
  
  return 0;
}
