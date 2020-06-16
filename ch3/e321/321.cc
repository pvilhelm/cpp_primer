
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  vector<int> vi;
  cout << "  vector<int> vi " << vi.size() << endl;
  for (auto it = vi.cbegin(); it != vi.cend(); it++)
    cout << *it << " ";
  cout << endl;
  
  vector<int> v2(10);
  cout << "  vector<int> v2(10) " << v2.size() << endl;
  for (auto it = v2.begin(); it != v2.end(); it++)
    cout << *it << " ";
  cout << endl;

  vector<int> v3(10, 42);
  cout << "  vector<int> v3(10, 42) " << v3.size() << endl;
  for (auto it = v3.begin(); it != v3.end(); it++)
    cout << *it << " ";
  cout << endl;

  vector<int> v4{10};
  cout << "  vector<int> v4{10} " << v4.size() << endl;
  for (auto it = v4.begin(); it != v4.end(); it++)
    cout << *it << " ";
  cout << endl;

  vector<int> v5{10, 42};
  cout << "  vector<int> v5{10, 42} " << v5.size() << endl;
  for (auto it = v5.begin(); it != v5.end(); it++)
    cout << *it << " ";
  cout << endl;

  vector<string> v6{10};
  cout << "  vector<string> v6{10} " << v6.size() << endl;
  for (auto it = v6.begin(); it != v6.end(); it++)
    cout << *it << " ";
  cout << endl;

  vector<string> v7{10, "hi"};
  cout << "  vector<string> v7{10, \"hi\"} " << v7.size() << endl;
  for (auto it = v7.begin(); it != v7.end(); it++)    
    cout << *it << " ";
  cout << endl;

  return 0;
}
