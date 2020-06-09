#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1, s2;

  cin >> s1;
  cin >> s2;
  /*
  cout << "Är s1 större än s2? " << (s1 > s2 ? "Ja" : "Nej") << endl;
  */
  if (s1.size() == s2.size())
    cout << "Strängarna är lika långa" << endl;
  else
    cout << "Är s1 längst?" << (s1.size() > s2.size()) << endl;
  return 0;
}
