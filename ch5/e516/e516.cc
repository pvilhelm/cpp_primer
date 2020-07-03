#include <iostream>

int main()
{
  using namespace std;

  char c;
  while(cin >> c)
    cout << c;

  /*
    for (; cin >> c;)
       cout << c;
  */
  cout << endl;
  for (int i = 1; i < 11; i++)
    cout << " " << i;
    
  
  return 0;
}
