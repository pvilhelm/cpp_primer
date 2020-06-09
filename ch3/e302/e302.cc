#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  /*
  while (getline(cin, s))
    cout << "En rad!: " << s;
  */
  while(cin >> s)
    cout << "Ett ord!: " << s;

  return 0;
}
