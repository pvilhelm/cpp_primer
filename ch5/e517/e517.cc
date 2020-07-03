#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main()
{
  using namespace std;
  
  string in;
  vector<int> v1, v2;
 
  getline(cin, in);

  stringstream ss1(in);
  int i;
  while (ss1 >> i)
    v1.push_back(i);

  getline(cin, in);

  stringstream ss2(in);
  while (ss2 >> i)
    v2.push_back(i);

  for (int i = 0; i < v1.size() && i < v2.size(); i++)
    if (v1[i] != v2[i])
      return -1;

  return 0;
}
