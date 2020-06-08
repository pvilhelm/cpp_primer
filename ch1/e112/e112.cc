#include <iostream>

int main()
{
  int sum = 0;
  int i;
  /* Summera Heltalen -100 till och med 100, dvs 0. */
  for (i = -100; i <= 100; ++i)
    sum += i;

  std::cout << sum << std::endl;
  
  return 0;
}
