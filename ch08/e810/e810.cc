#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
  ifstream ifs(argv[1]);
  if (!ifs)
    return -1;

  string s;
  vector<string> vs;

  while (getline(ifs, s))
    vs.push_back(s);

  stringstream iss;

  for (auto e : vs)
    iss << e;

  while (iss >> s)
    cout << s << endl;
  
  return 0;
}
