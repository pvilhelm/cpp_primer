#include <iostream>

int main()
{
  using namespace std;
  
  int grade;

  while (cin >> grade) {
    cout << ((grade >= 80)? "MVG" :
	     (grade >= 60)? "VG" :
	     (grade >= 50)? "G" : "IG") << endl;
    /*
    if (grade > 100)
      return -1;
    else if (grade < 0)
      return -1;
    else if (grade >= 80)
      cout << "MVG" << endl;
    else if (grade >= 60)
      cout << "VG" << endl;
    else if (grade >= 50)
      cout << "G" << endl;
    else
      cout << "IG" << endl;
    */
  }
  
  return 0;
}
