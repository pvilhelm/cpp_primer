#include <iostream>
#include <string>
#include <cctype>
#include <vector>


using namespace std;

int main()
{
  vector<string> text = {"En mening.", "En till", ""};
  
  for (auto it = text.begin(); it != text.end() && !it->empty(); it++) {
    for (auto iit = it->begin(); iit != it->end(); iit++)
      *iit = toupper(*iit);
    cout << *it << endl;
  }

  return 0;
}
