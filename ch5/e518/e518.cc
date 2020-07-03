#include <iostream>
#include <string>

int main()
{
  using namespace std;
  
  string in;
  string prev;

  do {

    if (prev.empty())
      ;
    else if (prev < in)
      cout << "Första före" << endl;
    else if (prev > in)
      cout << "Andra före" << endl;
    else
      cout << "Identiska" << endl;
    prev = in;
  } while(cin >> in);

  
  return 0;
}
