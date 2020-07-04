#include <iostream>
#include <stdexcept>

int main()
{
  int i1, i2;

  using namespace std;

  cin >> i1;
  cin >> i2;

  if (i2 == 0)
    throw invalid_argument("Andra argumentet är noll");
  
  if (!cin)
    return -1;

  cout << i1/i2;
  
  return 0;
}
