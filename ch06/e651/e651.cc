#include <iostream>

using namespace std;

void f() {cout << "f()";}
void f(int) {cout << "f(int)";}
void f(int, int) {cout << "f(int, int)";}
void f(double, double = 3.14) {cout << "f(double, double = 3.14)";}

int main()
{
  // f(2.56, 42);
  f(42);
  f(42, 0);
  f(2.56, 3.14);

  
  return 0;
}
