
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<int> vi;
  cout << "  vector<int> vi " << vi.size() << endl;
  for (auto& e : vi)
    cout << e << " ";
  cout << endl;
  
  vector<int> v2(10);
    cout << "  vector<int> v2(10) " << v2.size() << endl;
  for (auto& e : v2)
    cout << e << " ";
  cout << endl;

  vector<int> v3(10, 42);
  cout << "  vector<int> v3(10, 42) " << v3.size() << endl;
  for (auto&e : v3)
    cout << e << " ";
  cout << endl;

  vector<int> v4{10};
  cout << "  vector<int> v4{10} " << v4.size() << endl;
  for (auto& e : v4)
    cout << e << " ";
  cout << endl;

  vector<int> v5{10, 42};
  cout << "  vector<int> v5{10, 42} " << v5.size() << endl;
  for (auto& e : v5)
    cout << e << " ";
  cout << endl;

  vector<string> v6{10};
  cout << "  vector<string> v6{10} " << v6.size() << endl;
  for (auto& e : v6)
    cout << e << " ";
  cout << endl;

  vector<string> v7{10, "hi"};
  cout << "  vector<string> v7{10, \"hi\"} " << v7.size() << endl;
  for (auto& e : v7)
    cout << e << " ";
  cout << endl;

  return 0;
}
