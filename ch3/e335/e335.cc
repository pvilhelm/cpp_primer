
int main()
{
  int arr[10];
  for (int *p = arr; p != arr + 10; p++)
    *p = 0;
  
  return 0;
}
