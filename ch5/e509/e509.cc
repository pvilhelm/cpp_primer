#include <iostream>
#include <cctype>

int main()
{
  using namespace std;

  int vowels = 0;
  
  char c;
  while(cin >> c) {
    c = tolower(c);
    if (c == 'a' || c == 'o' || c == 'e' ||
	c == 'i' || c == 'y' || c == 'u')
      vowels++;
  }
  cout << vowels;
  
  return 0;
}
