#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
  if (argc < 2)
    return -1;

  ifstream ifs(argv[1]);

  if (!ifs)
    return -2;

  string s;
  vector<string> vs;
  while (getline(ifs, s))
    vs.push_back(s);

  for (auto e : vs)
    cout << e << endl;
    
  return 0;
}
