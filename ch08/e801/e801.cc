#include <iostream>

using namespace std;

istream &woo(istream &is)
{
  char c;
  is >> noskipws;
  while(is >> c)
    cout << c;
  return is;
}

int main()
{
  woo(cin);
  return 0;
}
