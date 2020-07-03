#include <iostream>
#include <cctype>

int main()
{
  using namespace std;

  int vowels = 0;
  int ws = 0;
  char c;

  cin >> noskipws;
  
  while(cin >> c) {
    c = tolower(c);
    if (c == 'a' || c == 'o' || c == 'e' ||
	c == 'i' || c == 'y' || c == 'u')
      vowels++;
    else if (isspace(c))
      ws++;
  }
  cout << "Vokaler: " << vowels << endl;
  cout << "Mellanrum: " << ws;
  
  return 0;
}
